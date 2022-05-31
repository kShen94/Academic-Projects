note
	description: "Summary description for {DATABASE_TESTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DATABASE_TESTS
	inherit
		ES_TEST
			redefine
				setup, teardown
			end

create
	make

feature  -- Add tests
	make
			-- Run application.
	do
		create d.make
		check d.count = 0 end

		add_violation_case_with_tag("non_existing_key", agent test_add_existing_key)
		add_violation_case_with_tag("existing_key", agent test_remove_nonexisting_key)
		add_violation_case_with_tag("non_existing_key", agent test_unique_keys)
		add_boolean_case (agent test_exists_with_nonmatching_values)

	end

feature -- Setup
	d: DATABASE[STRING, CHARACTER, INTEGER]
	setup
			-- Initialize 'd' as a 4-record database.
			-- This feature is executed in the beginning of every test feature.
		do
			d.add_record ("A", 'a', 1)
			d.add_record ("B", 'b', 2)
			d.add_record ("C", 'c', 3)
			d.add_record ("D", 'd', 4)
		end
	teardown
			-- Recreate 'd' as an empty database.
			-- This feature is executed at end of every test feature.
		do
			create d.make
		end

feature -- Tests

	test_add_existing_key
		do
			d.add_record ("E", 'e', 1)
		end
	test_remove_nonexisting_key
		do
			d.remove_record (7)
		end

	test_unique_keys
		do
			d.add_record ("E", 'e', 1)
		end

	test_exists_with_nonmatching_values: BOOLEAN
		local
			l : LINKED_LIST[INTEGER]
		do
			create l.make
			result := d.get_keys ("A", 'c') ~ l
		end
end
