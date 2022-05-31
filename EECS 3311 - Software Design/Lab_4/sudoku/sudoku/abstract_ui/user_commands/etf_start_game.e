note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_START_GAME
inherit
	ETF_START_GAME_INTERFACE
		redefine start_game end
create
	make
feature -- command
	start_game
    	do
			-- perform some update on the model state
			if(model.game_started)then
				model.set_error ("Error: Game already started")
			else
			model.start_game
			model.error.make_empty
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
