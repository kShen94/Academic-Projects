note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_PUT_NUMBER
inherit
	ETF_PUT_NUMBER_INTERFACE
		redefine put_number end
create
	make
feature -- command
	put_number(num: INTEGER_64 ; row: INTEGER_64 ; col: INTEGER_64)
		local
			n,r,c :INTEGER
    	do
			-- perform some update on the model state
			n := num.as_integer_32
			r := row.as_integer_32
			c := col.as_integer_32
			model.set_put_error_check (n, r, c)
			if(not(model.game_started))then
				model.set_error ("Error: Game not yet started")
			elseif(model.error.is_empty)then
			model.put_number (n,r,c)
			model.check_game_end
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
