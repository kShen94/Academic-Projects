note
	description: "Input Handler"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ETF_INPUT_HANDLER_INTERFACE
inherit
	ETF_TYPE_CONSTRAINTS

feature {NONE}

	make_without_running(etf_input: STRING; a_commands: ETF_ABSTRACT_UI_INTERFACE)
			-- convert an input string into array of commands
	  	do
	  		create on_error
		  	input_string := etf_input
		  	abstract_ui  := a_commands
	  	end

	make(etf_input: STRING; a_commands: ETF_ABSTRACT_UI_INTERFACE)
			-- convert an input string into array of commands
	  	do
	  		make_without_running(etf_input, a_commands)
			parse_and_validate_input_string
	  	end

feature -- auxiliary queries

	etf_evt_out (evt: TUPLE[name: STRING; args: ARRAY[ETF_EVT_ARG]]): STRING
		local
			etf_local_i: INTEGER
			name: STRING
			args: ARRAY[ETF_EVT_ARG]
		do
			name := evt.name
			args := evt.args
			create Result.make_empty
			Result.append (name + "(")
			from
				etf_local_i := args.lower
			until
				etf_local_i > args.upper
			loop
				if args[etf_local_i].src_out.is_empty then
					Result.append (args[etf_local_i].out)
				else
					Result.append (args[etf_local_i].src_out)
				end
				if etf_local_i < args.upper then
					Result.append (", ")
				end
				etf_local_i := etf_local_i + 1
			end
			Result.append (")")
		end

feature -- attributes

	etf_error: BOOLEAN

	input_string: STRING -- list of commands to execute

	abstract_ui: ETF_ABSTRACT_UI_INTERFACE
		-- output generated by `parse_string'

feature -- error reporting

	on_error: ETF_EVENT [TUPLE[STRING]]

feature -- error messages

	input_cmds_syntax_err_msg : STRING =
		"Syntax Error: specification of command executions cannot be parsed"

	input_cmds_type_err_msg : STRING =
		"Type Error: specification of command executions is not type-correct"

feature -- parsing

	parse_and_validate_input_string
	  local
		trace_parser : ETF_EVT_TRACE_PARSER
		cmd : ETF_COMMAND_INTERFACE
		invalid_cmds: STRING
	  do
		create trace_parser.make (evt_param_types_list, enum_items)
		trace_parser.parse_string (input_string)

	    if trace_parser.last_error.is_empty then
	  	  invalid_cmds := find_invalid_evt_trace (
		    	trace_parser.event_trace)
		  if invalid_cmds.is_empty then
		    across trace_parser.event_trace
		    as evt
		    loop
		      cmd := evt_to_cmd (evt.item)
		      abstract_ui.put (cmd)
		    end
		  else
		    etf_error := TRUE
		    on_error.notify (
		  	  input_cmds_type_err_msg + "%N" + invalid_cmds)
		  end
	    else
	      etf_error := TRUE
	      on_error.notify (
		    input_cmds_syntax_err_msg + "%N" + trace_parser.last_error)
	    end
	end

	evt_to_cmd (evt : TUPLE[name: STRING; args: ARRAY[ETF_EVT_ARG]]) : ETF_COMMAND_INTERFACE
		local
			cmd_name : STRING
			args : ARRAY[ETF_EVT_ARG]
			dummy_cmd : ETF_DUMMY
		do
			cmd_name := evt.name
			args := evt.args
			create dummy_cmd.make("dummy", [], abstract_ui)

			if cmd_name ~ "analyze" then 
				 if TRUE then 
					 create {ETF_ANALYZE} Result.make ("analyze", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "simplify" then 
				 if TRUE then 
					 create {ETF_SIMPLIFY} Result.make ("simplify", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "restart" then 
				 if TRUE then 
					 create {ETF_RESTART} Result.make ("restart", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "bool_value" then 
				 if attached {ETF_BOOL_ARG} args[1] as c and then TRUE then 
					 create {ETF_BOOL_VALUE} Result.make ("bool_value", [c.value], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "int_value" then 
				 if attached {ETF_INT_ARG} args[1] as c and then TRUE then 
					 create {ETF_INT_VALUE} Result.make ("int_value", [c.value], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "addition" then 
				 if TRUE then 
					 create {ETF_ADDITION} Result.make ("addition", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "subtraction" then 
				 if TRUE then 
					 create {ETF_SUBTRACTION} Result.make ("subtraction", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "multiplication" then 
				 if TRUE then 
					 create {ETF_MULTIPLICATION} Result.make ("multiplication", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "quotient" then 
				 if TRUE then 
					 create {ETF_QUOTIENT} Result.make ("quotient", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "modulo" then 
				 if TRUE then 
					 create {ETF_MODULO} Result.make ("modulo", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "conjunction" then 
				 if TRUE then 
					 create {ETF_CONJUNCTION} Result.make ("conjunction", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "disjunction" then 
				 if TRUE then 
					 create {ETF_DISJUNCTION} Result.make ("disjunction", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "implication" then 
				 if TRUE then 
					 create {ETF_IMPLICATION} Result.make ("implication", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "exclusive_or" then 
				 if TRUE then 
					 create {ETF_EXCLUSIVE_OR} Result.make ("exclusive_or", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "equals" then 
				 if TRUE then 
					 create {ETF_EQUALS} Result.make ("equals", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "greater_than" then 
				 if TRUE then 
					 create {ETF_GREATER_THAN} Result.make ("greater_than", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "less_than" then 
				 if TRUE then 
					 create {ETF_LESS_THAN} Result.make ("less_than", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "union" then 
				 if TRUE then 
					 create {ETF_UNION} Result.make ("union", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "intersection" then 
				 if TRUE then 
					 create {ETF_INTERSECTION} Result.make ("intersection", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "difference" then 
				 if TRUE then 
					 create {ETF_DIFFERENCE} Result.make ("difference", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "numerical_negation" then 
				 if TRUE then 
					 create {ETF_NUMERICAL_NEGATION} Result.make ("numerical_negation", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "logical_negation" then 
				 if TRUE then 
					 create {ETF_LOGICAL_NEGATION} Result.make ("logical_negation", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "sigma" then 
				 if TRUE then 
					 create {ETF_SIGMA} Result.make ("sigma", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "product" then 
				 if TRUE then 
					 create {ETF_PRODUCT} Result.make ("product", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "counting" then 
				 if TRUE then 
					 create {ETF_COUNTING} Result.make ("counting", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "forall" then 
				 if TRUE then 
					 create {ETF_FORALL} Result.make ("forall", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "exists" then 
				 if TRUE then 
					 create {ETF_EXISTS} Result.make ("exists", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "start_of_set_enumeration" then 
				 if TRUE then 
					 create {ETF_START_OF_SET_ENUMERATION} Result.make ("start_of_set_enumeration", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 

			elseif cmd_name ~ "end_of_set_enumeration" then 
				 if TRUE then 
					 create {ETF_END_OF_SET_ENUMERATION} Result.make ("end_of_set_enumeration", [], abstract_ui) 
				 else 
					 Result := dummy_cmd 
				 end 
			else 
				 Result := dummy_cmd 
			end 
		end

	find_invalid_evt_trace (
		event_trace: ARRAY[TUPLE[name: STRING; args: ARRAY[ETF_EVT_ARG]]])
	: STRING
	local
		loop_counter: INTEGER
		evt: TUPLE[name: STRING; args: ARRAY[ETF_EVT_ARG]]
		cmd_name: STRING
		args: ARRAY[ETF_EVT_ARG]
		evt_out_str: STRING
	do
		create Result.make_empty
		from
			loop_counter := event_trace.lower
		until
			loop_counter > event_trace.upper
		loop
			evt := event_trace[loop_counter]
			evt_out_str := etf_evt_out (evt)

			cmd_name := evt.name
			args := evt.args

			if cmd_name ~ "analyze" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"analyze")
				end

			elseif cmd_name ~ "simplify" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"simplify")
				end

			elseif cmd_name ~ "restart" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"restart")
				end

			elseif cmd_name ~ "bool_value" then 
				if NOT( ( args.count = 1 ) AND THEN attached {ETF_BOOL_ARG} args[1] as c and then TRUE) then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"bool_value(c: BOOLEAN)")
				end

			elseif cmd_name ~ "int_value" then 
				if NOT( ( args.count = 1 ) AND THEN attached {ETF_INT_ARG} args[1] as c and then TRUE) then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"int_value(c: INTEGER_64)")
				end

			elseif cmd_name ~ "addition" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"addition")
				end

			elseif cmd_name ~ "subtraction" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"subtraction")
				end

			elseif cmd_name ~ "multiplication" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"multiplication")
				end

			elseif cmd_name ~ "quotient" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"quotient")
				end

			elseif cmd_name ~ "modulo" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"modulo")
				end

			elseif cmd_name ~ "conjunction" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"conjunction")
				end

			elseif cmd_name ~ "disjunction" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"disjunction")
				end

			elseif cmd_name ~ "implication" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"implication")
				end

			elseif cmd_name ~ "exclusive_or" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"exclusive_or")
				end

			elseif cmd_name ~ "equals" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"equals")
				end

			elseif cmd_name ~ "greater_than" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"greater_than")
				end

			elseif cmd_name ~ "less_than" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"less_than")
				end

			elseif cmd_name ~ "union" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"union")
				end

			elseif cmd_name ~ "intersection" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"intersection")
				end

			elseif cmd_name ~ "difference" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"difference")
				end

			elseif cmd_name ~ "numerical_negation" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"numerical_negation")
				end

			elseif cmd_name ~ "logical_negation" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"logical_negation")
				end

			elseif cmd_name ~ "sigma" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"sigma")
				end

			elseif cmd_name ~ "product" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"product")
				end

			elseif cmd_name ~ "counting" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"counting")
				end

			elseif cmd_name ~ "forall" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"forall")
				end

			elseif cmd_name ~ "exists" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"exists")
				end

			elseif cmd_name ~ "start_of_set_enumeration" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"start_of_set_enumeration")
				end

			elseif cmd_name ~ "end_of_set_enumeration" then 
				if FALSE then 
					if NOT Result.is_empty then
						Result.append ("%N")
					end
					Result.append (evt_out_str + " does not conform to declaration " +
							"end_of_set_enumeration")
				end
			else
				if NOT Result.is_empty then
					Result.append ("%N")
				end
				Result.append ("Error: unknown event name " + cmd_name)
			end
			loop_counter := loop_counter + 1
		end
	end
end