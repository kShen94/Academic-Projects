note
	description: "Summary description for {CMD_START_GAME}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CMD_START_GAME
inherit COMMAND

create
	make

feature
	undo
	do
		model.decrement_pointer
		model.undo_start
	end

	execute
	do
		model.start
	end

end
