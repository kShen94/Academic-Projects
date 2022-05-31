note
	description: "[
		A 2D Matrix (where row and column numbers start with 0) implemented 
		as a 2D array (where row and column number start with 1).
		Be cautious about this mismatch of starting rows and columns between
		the 2D Matrix (which is an ADT) and the 2D array (which is an implementation).
	]"
	author: "Kevin Shen"
	date: "$Date$"
	revision: "$Revision$"

class
	MATRIX

inherit
	ANY
	redefine
		-- when you call m1 ~ m2, where m1 and m2 are MATRIX objects,
		-- the redefined (overridden) version of is_equal is called.
		is_equal
	end

create -- declare the following two commands as constructors
	make,
	make_from

feature {NONE} -- Implementation
	imp: ARRAY2[ENTRY]
		-- row numbers start with 1
		-- column numbers start with 1

feature -- Commands

	make (nor: INTEGER; noc: INTEGER)
			-- Initialize a matrix with 'nor' rows and 'noc' columns.
			-- Use the "make_filled" feature from ARRAY2 class,
			-- where for the default value of ENTRY,
			-- use the "default_create" constructor.
		require
			no_precond: True -- Do not modify this.
		local
			def : ENTRY
		do
			-- Your Task.
			-- Initialize 'imp' properly.
			def := create {ENTRY}.default_create
			imp := create {ARRAY2[ENTRY]}.make_filled (def, nor, noc)
		ensure
			number_of_rows_initialized: -- Your Task
			current.number_of_rows = nor

			number_of_columns_initialized: -- Your Task
			current.number_of_columns = noc
		end

	make_from (lol: LINKED_LIST[LINKED_LIST[ENTRY]])
			-- Initialize a matrix from a list of lists.
		require
			non_empty_list_of_lists: lol.count>0 and  -- Your Task
			across
				1 |..| lol.count as x
			all
				lol[x.item].count >0

			end

			rectangle_shape: -- Your Task
				-- Hint: 'lol' being a list of equal-sized lists
				across
					1 |..| lol.count as x
				all
					lol[x.item].count ~ lol.first.count
				end

			-- Your Task.
			-- Initialize 'imp' properly

		local
			def : ENTRY
		do
			def := create {ENTRY}.default_create
			imp:= create {ARRAY2[ENTRY]}.make_filled(def,lol.count, lol[1].count)
				across 1 |..| imp.height as r
			 	loop
			 		across 1 |..| imp.width as c
			 	 	loop
			 	 		imp[r.item,c.item] := lol[r.item][c.item]
			 	 	end

			 	end

		ensure
			number_of_rows_initialized: -- Your Task
			current.number_of_rows = lol.count
			number_of_columns_initialized: -- Your Task
			current.number_of_columns = lol[1].count
			correct_contents: -- Your Task
				-- Hint: Each row of the matrix matches the corresponding element list of 'lol'.
			across 0 |..| (current.number_of_rows-1) as r
			all
				across 0 |..| (current.number_of_columns-1) as c
				all
					current.get_entry (r.item, c.item).sv ~ lol[r.item+1][c.item+1].sv and
					current.get_entry (r.item, c.item).iv ~ lol[r.item+1][c.item+1].iv
				end
			end

		end

feature -- Queries

	scalar_multiply (scalar: INTEGER): MATRIX
			-- Obtain a new matrix by applying a scalar multiplication to the current matrix.
		require
			no_precond: True -- Do not modify this.
		local
			new : MATRIX
			e : ENTRY
		do
			create new.make(imp.height,imp.width)
			across 0 |..| (new.number_of_rows-1) as r
			loop
				across 0 |..| (new.number_of_columns-1) as c
				loop
					create e.make (imp[r.item+1,c.item+1].iv * scalar, imp[r.item+1,c.item+1].sv)
					new.set_entry (e, r.item, c.item)

				end
			end

			print(new.get_entry (1, 1).iv)
			print(current.get_entry (1, 1).iv)
			result := new

		ensure
			current_matrix_unchanged: -- Your Task
				-- Hint: Shallow or Deep copy?
				across
					0 |..| (current.number_of_rows-1) as r
				all
					across 0 |..| (current.number_of_columns-1) as c
					all
						current.get_entry (r.item, c.item) ~ (old current).deep_twin.get_entry (r.item, c.item)
					end
				end

			same_dimension_sizes: -- Your Task
				-- Hint: Returned matrix is as "big" as the current matrix.
				result.number_of_columns = current.number_of_columns and result.number_of_rows = result.number_of_rows

			iv_of_each_entry_scaled: -- Your Task
				-- Hint: Integer value of each entry is scaled properly.
				across 0 |..| (result.number_of_rows-1) as r
				all
					across 0 |..| (result.number_of_columns-1) as c
					all
						result.get_entry (r.item, c.item).iv = (current.get_entry (r.item, c.item).iv * scalar)
					end
				end
			sv_of_each_entry_same: -- Your Task
				-- Hint: String value of each entry remains the same.
				across 0 |..| (result.number_of_rows-1) as r
				all
					across 0 |..| (result.number_of_columns-1) as c
					all
						result.get_entry(r.item,c.item).sv ~ current.get_entry (r.item, c.item).sv
					end
				end
		end

	transpose: MATRIX
			-- Obtain a new matrix by applying taking the transpose of current matrix.
		local
			tp : MATRIX
		do
			-- Your Task.
			create tp.make(imp.width, imp.height)
			across 0 |..| (tp.number_of_rows-1) as r
			loop
				across 0 |..| (tp.number_of_columns-1) as c
				loop
					tp.set_entry (imp[c.item+1,r.item+1], r.item, c.item)
				end
			end
			result := tp
		ensure
			current_matrix_unchanged: -- Your Task
				-- Hint: Shallow or Deep copy?
				across
					0 |..| (current.number_of_rows-1) as r
				all
					across 0 |..| (current.number_of_columns-1) as c
					all
						current.get_entry (r.item, c.item) ~ (old current.deep_twin).get_entry (r.item,  c.item)
					end
				end
			corresponding_dimensions: -- Your Task
				-- Hint: How do a matrix and its transpose correspond in terms of
				-- their number of rows and columns?
				result.number_of_columns ~ current.number_of_rows and
				result.number_of_rows ~ current.number_of_columns
			corresponding_cells: -- Your Task
				-- Hint: How do a matrix and its transpose correspond in terms of
				-- their contents? (review the mathematical definition!)
				across 0 |..| (current.number_of_rows-1) as r
				all
					across 0 |..| (current.number_of_columns-1) as c
					all
						current.get_entry (r.item, c.item) ~ result.get_entry (c.item, r.item)
					end
				end
		end

feature -- Queries
	number_of_rows: INTEGER
			-- Number of rows of current matrix.
		do
			-- Your Task.
			result := imp.height
		ensure
			-- Do not add postconditions.
		end

	number_of_columns: INTEGER
			-- Number of columns of current matrix.
		do
			-- Your Task.
			result := imp.width
		ensure
			-- Do not add postconditions.
		end

	number_of_entries: INTEGER
			-- Number of entries stored in the current matrix.
		do
			-- Your Task.
			result := imp.count
		ensure
			correct_result: -- Your Task
				result = current.number_of_columns * current.number_of_rows
		end

	set_entry (e: ENTRY; row, column: INTEGER)
			-- Set entry at row 'row' and column 'column' to 'e'.
		require
			valid_row: -- Your Task
				1 <= row+1 and	row+1 <= current.number_of_rows
			valid_column: -- Your Task
				1 <= column+1 and column +1 <= current.number_of_columns
		do
			-- Your Task
			imp[row+1,column+1] := e
		ensure
			designated_cell_changed: -- Your Task
				-- How many cells are supposed to be changed?
				current.get_entry (row, column) /~ (old current.deep_twin).get_entry (row, column)
			other_cells_unchanged: -- Your Task
				-- How do you argue logically about all cells
				-- except those that are meant to be changed?
			across 0 |..| (current.number_of_rows-1) as r
			all
				across 0 |..| (current.number_of_columns-1) as c
				all
					(old current).get_entry (r.item, c.item) ~ current.get_entry (r.item, c.item) or (r.item ~ row and c.item ~ column)
				end
			end
		end

	get_entry (row, column: INTEGER): ENTRY
			-- Entry at row 'row' and column 'column'.
		require
			valid_row: -- Your Task
				row+1 >= 1 and row+1 <= current.number_of_rows
			valid_column: -- Your Task
				column+1 >= 1 and column+1 <= current.number_of_columns
		do
			-- Your Task.
			result := imp[row+1,column+1]
		ensure
			-- Do not add postconditions.
		end

	get_row (i: INTEGER): ARRAY[ENTRY]
			-- Row 'i' as an array.
		require
			valid_row: -- Your Task
				i+1 >= 1 and i+1 <= current.number_of_rows
		local
			row : ARRAY[ENTRY]
			e : ENTRY
		do
			-- Your Task
			create e.default_create
			create row.make_filled(e,1,imp.width)
			across 1 |..| imp.width as p
			loop
				row[p.item] := imp[i+1, p.item]
			end
			result := row

		ensure
			return_value_constraint: -- Do Not Modify this.
				Result.lower = 1
			correct_result: -- Your Task
				-- Hint: How does the returned array correspond to the
				-- designated row?
				across 1 |..| current.number_of_columns as p
				all
					result[p.item].sv ~ current.get_entry (i, (p.item-1)).sv and
					result[p.item].iv ~ current.get_entry (i, (p.item-1)).iv
				end
		end

	get_column (i: INTEGER): LINKED_LIST[ENTRY]
			-- Column 'i' as a linked list.
		require
			valid_column: -- Your Task
				i <= 1 and i+1 <= current.number_of_columns
		local
			list : LINKED_LIST[ENTRY]
		do
			-- Your Task
			list := create {LINKED_LIST[ENTRY]}.make
			across 1 |..| imp.height as r
			loop
				list.extend (imp[r.item,i+1])
			end
			result := list
		ensure
			correct_result: -- Your Task
				-- Hint: How does the returned list correspond to the
				-- designated column?
				across 1 |..| current.number_of_rows as r
				all
					result[r.item].sv ~ current.get_entry ((r.item-1), i).sv and
					result[r.item].iv ~ current.get_entry ((r.item-1), i).iv
				end
		end

feature -- Equality
	is_equal (other: like Current): BOOLEAN
			-- Do entries in Current matrix and 'other' match
			-- at each cell?
		do
			-- Your Task
			result :=	across 0 |..| (imp.height -1) as r
			all
				across 0 |..| (imp.width -1) as c
				all
					imp[r.item +1,c.item +1] ~ other.get_entry (r.item, c.item)
				end
			end
		ensure then
			equal_means_same_dimensioin_sizes: -- Your Task
				-- Hint: equal matrices must at least have same dimension sizes.
				current.number_of_columns ~ other.number_of_columns and
				current.number_of_rows ~ other.number_of_rows

			equal_means_corresponding_entries_equal: -- Your Task
				-- Hint: equal matrices also have matching entries at corresponding positions.
				across 0 |..| (current.number_of_rows-1) as r
				all
					across 0 |..| (current.number_of_columns-1) as c
					all
						current.get_entry (r.item, c.item).sv ~ other.get_entry (r.item, c.item).sv and
						current.get_entry (r.item, c.item).iv ~ other.get_entry (r.item, c.item).iv
					end
				end
		end

invariant
	implementation_constraint: -- Do Not Modify This.
		imp.lower = 1
	at_least_1_by_1: -- Your Task
		-- Hint: Each MATRIX is at least 1 * 1.
		imp.width * imp.height > 1

end
