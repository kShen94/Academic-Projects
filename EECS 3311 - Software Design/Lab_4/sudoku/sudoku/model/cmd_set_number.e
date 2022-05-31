note
	description: "Summary description for {CMD_SET_NUMBER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CMD_SET_NUMBER
inherit
	COMMAND

create
	make

feature
	undo
	local
		row,col : INTEGER
	do
		row := model.history[model.pointer].r
		col := model.history[model.pointer].c
		model.decrement_pointer
		model.remove(row,col)
	end

	execute
	do
		put_number(num,r,c)
	end

	put_number(n,m_row,m_col: INTEGER)
	do
		model.s[m_row,m_col] := num
	end
end
