note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_EXISTS
inherit 
	ETF_EXISTS_INTERFACE
		redefine exists end
create
	make
feature -- command 
	exists
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
