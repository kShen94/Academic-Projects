note
	description: "Summary description for {CMD_RESTART_GAME}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CMD_RESTART_GAME
inherit COMMAND

create
	make

feature
	undo
	do
		-- Do nothing
	end

	execute
	do
		model.reset
	end


end
