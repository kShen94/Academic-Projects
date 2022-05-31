note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_SET_NUMBER
inherit
	ETF_SET_NUMBER_INTERFACE
		redefine set_number end
create
	make
feature -- command
	set_number(num: INTEGER_64 ; row: INTEGER_64 ; col: INTEGER_64)
		local
			n,r,c : INTEGER
    	do
			-- perform some update on the model state
			n := num.as_integer_32
			r := row.as_integer_32
			c := col.as_integer_32
			model.set_put_error_check (n, r, c)
			if(model.game_started)then
				model.set_error("Error: Game already started")
			elseif(model.error.is_empty)then
			model.set_number (n, r, c)
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
