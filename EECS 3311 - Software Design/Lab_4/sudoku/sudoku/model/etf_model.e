note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MODEL

inherit
	ANY
		redefine
			out
		end

create {ETF_MODEL_ACCESS}
	make

feature {NONE} -- Initialization
	make
			-- Initialization for `Current'.
		do
			create s.make_filled(0,4,4)
			create output.make_empty
			create error.make_empty
			i := 0
			game_started := false
			game_end := false
			create history.make_empty
			pointer := 0
		end

feature -- model attributes
	s : ARRAY2[INTEGER]
	i : INTEGER
	game_started: BOOLEAN
	output : STRING
	error : STRING
	game_end: BOOLEAN
	history : ARRAY[COMMAND]
	pointer : INTEGER

feature -- model operations
	restart_game
		local
			rs : CMD_RESTART_GAME
		do
			create rs.make(0,0,0)
			rs.execute
		end

	redo
		require
			redoable_command:
			pointer < history.upper
		local
			cmd: COMMAND
		do
			increment_pointer
			cmd:= history[pointer]
			cmd.execute
		end
	undo
		require
			undoable_command:
			pointer >=1
		local
			cmd : COMMAND
		do
			cmd := history[pointer]
			cmd.undo
		end


	set_number(num, row, col: INTEGER)
		require
			game_not_started:
				not(game_started)
			valid_row_number:
				row>=1 and row<=4
			valid_column_number:
				col>=1 and col<=4
			cell_not_filled:
				s[row,col] ~ 0
			invalid_value:
				num>=1 and num <=4
			number_not_in_row:
				across 1 |..| s.height as r
				all
					s[row,r.item] /~ num
				end
			number_not_in_column:
				across 1 |..| s.width as c
				all
					s[c.item,col] /~ num
				end
			number_not_in_subgrid:
				check_subgrid(num,row,col)
		local
			sn : CMD_SET_NUMBER
		do
			create sn.make(num,row,col)
			increment_pointer
			history.force (sn, pointer)
			history_remove_tail
			sn.execute
		end

	put_number(num,row,col: INTEGER)
		require
			game_started:
				game_started
			valid_row_number:
				row>=1 and row<=4
			valid_column_number:
				col>=1 and col<=4
			cell_not_filled:
				s[row,col] ~ 0
			invalid_value:
				num >=1 and num <=4
			number_not_in_row:
				across 1 |..| s.height as r
				all
					s[row,r.item] /~ num
				end
			number_not_in_column:
				across 1 |..| s.width as c
				all
					s[c.item,col] /~ num
				end
			number_not_in_subgrid:
				check_subgrid(num,row,col)
		local
			pn : CMD_PUT_NUMBER
		do
			create pn.make(num,row,col)
			increment_pointer
			history.force (pn, pointer)
			history_remove_tail
			pn.execute
		end

	start_game
		require
			game_not_started:
				not(game_started)
		local
			gs : CMD_START_GAME
		do
			create gs.make(0,0,0)
			increment_pointer
			history.force (gs, pointer)
			history_remove_tail
			gs.execute
		end

feature -- Helper
	clear_error
		do
			create error.make_empty
		end
	history_remove_tail
		do
			history.keep_head (pointer)
		end
	undo_start
		do
			game_started := false
		end
	start
		do
			game_started := true
		end
	reset
			-- Reset model state.
		do
			create s.make_filled(0,4,4)
			create output.make_empty
			create error.make_empty
			i := 0
			game_started := false
			game_end := false
			create history.make_empty
			pointer := 0
		end
	add_command(cmd: COMMAND)
		do

		end

	remove(row,col : INTEGER)
		do
			s[row,col] := 0
		end

	set_error(st: STRING)
		do
			error := st
		end

	increment_pointer
		do
			pointer := pointer + 1
		end

	decrement_pointer
		do
			pointer := pointer -1
		end

	set_put_error_check(num,row,col:INTEGER)
		do
			if(row<1 or row>4)then -- Invalid row
				error := "Error: Invalid row number"
			elseif (col<1 or col>4) then -- Invalid column
				error := "Error: Invalid column number"
			elseif (s[row,col] /~ 0) then -- Cell not empty
				error := "Error: Cell already filled"
			elseif (num<1 or num >4) then -- Invalid number
				error := "Error: Invalid value to put in cell"
			elseif (across 1 |..| s.height as r -- Existing number in row
				some
					s[row,r.item] ~ num
				end) then
				error := "Error: Number already exists in row"
			elseif (across 1 |..| s.width as c -- Existing number in column
				some
					s[c.item,col] ~ num
				end) then
				error := "Error: Number already exists in column"
			elseif(not(check_subgrid(num,row,col)))then
				error := "Error: Number already exists in subgrid"
			else
				error.make_empty
			end
		end


	check_subgrid(num,row,col:INTEGER):BOOLEAN
		local
			srow,scol: INTEGER
		do
			if(row <=2)then
				srow :=1
			else
				srow :=3
			end
			if(col <=2)then
				scol :=1
			else
				scol :=3
			end
			Result := across srow |..| (srow+1) as r
			all
				across scol |..| (scol+1) as c
				all
					s[r.item,c.item] /~ num
				end
			end
		end

	check_game_end
		do
			if(across 1 |..| s.height as r
			all
				across 1 |..| s.width as c
				all
					s[r.item,c.item] /~ 0
				end
			end) then
				game_end := true
			else
				game_end := false
			end
		end

feature -- queries

	out : STRING
		do
			create Result.make_from_string ("  ")
			if(error.is_empty) then
				if(not(game_started))then
					Result.append ("Setting up a new grid")
				else
					Result.append ("Current game is over: ")
					if(game_end) then
						Result.append ("Yes")
					else
						Result.append ("No")
					end
				end
			else
				Result.append (error)
			end
			across 1 |..| s.width as r
			loop
				output.make_from_string("%N  ")
				across 1 |..| s.height as c
				loop
					output.append_integer (s[r.item,c.item])
					output.append ("   ")
				end
				output.right_adjust
				Result.append (output)
			end

		end



end




