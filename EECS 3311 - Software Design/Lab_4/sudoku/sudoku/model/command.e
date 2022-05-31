note
	description: "Summary description for {COMMAND}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class COMMAND

feature
	execute deferred end
	undo deferred end

feature {NONE}
	make(number,row,column : INTEGER)
	local
		model_access: ETF_MODEL_ACCESS
	do
		model := model_access.m
		r := row
		c := column
		num := number
	end

feature
	model : ETF_MODEL
	r: INTEGER
	c: INTEGER
	num: INTEGER

end
