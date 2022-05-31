note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_SIGMA
inherit 
	ETF_SIGMA_INTERFACE
		redefine sigma end
create
	make
feature -- command 
	sigma
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
