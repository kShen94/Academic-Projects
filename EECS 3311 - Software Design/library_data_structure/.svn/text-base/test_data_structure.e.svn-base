note
	description: "A test class illustrating soem common features of ARRAY and LINKED_LIST"
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_DATA_STRUCTURE

inherit
	ES_TEST

create
	make_tests

feature -- Adding tests

	make_tests
			-- Run application.
		do
			add_boolean_case (agent test_arrays)
			add_boolean_case (agent test_lists)
			show_browser
			run_espec
		end

feature -- Tests of arrays

	test_arrays: BOOLEAN
		local
			a1: ARRAY[INTEGER]
			a2: ARRAY[INTEGER]
		do
			comment("Test array features.")
			create a1.make_empty
			Result := a1.lower = 1 and a1.upper = 0 and a1.count = 0
			check Result end

			a2 := <<2, 4, 6, 8>>
			Result := a1.lower = 1 and a1.upper = 0
			check Result end

			a1.force (2, 1) -- force value '2' into index '1' of 'a1'
			a1.force (4, 2) -- force value '4' into index '2' of 'a1'
			Result :=
				a1.lower = 1 and a1.upper = 2 and
				a1.count = 2 and a1 [1] = 2 and a1 [2] = 4
			check Result end

			Result := -- Are all integers in a1 even?
				across
					a1.lower |..| a1.upper as i -- i is a cursor to a list of integers
				all
					a1 [i.item] \\ 2 = 0
				end
			check Result end

			Result := -- Is there at least one integer in a1 negative?
				not (
					across
						a1.lower |..| a1.upper as i -- i is a cursor to a list of integers
					some
						a1 [i.item] < 0
					end
				)
			check Result end
		end

feature -- Tests of linked lists

	test_lists: BOOLEAN
		local
			list: LINKED_LIST[INTEGER]
		do
			comment("Test array features.")
			create list.make
			Result := list.count = 0
			check Result end

			list.extend (2) -- insert value '2' to the end of 'list'
			list.extend (4) -- insert value '4' to the end of 'list'
			Result := list.count = 2 and list [1] = 2 and list [2] = 4
			check Result end

			Result := -- Are all integers in a1 even?
				across
					1 |..| list.count as i -- i is a cursor to a list of integers
				all
					list [i.item] \\ 2 = 0
				end
			check Result end

			Result := -- Is there at least one integer in a1 negative?
				not (
					across
						1 |..| list.count as i -- i is a cursor to a list of integers
					some
						list [i.item] < 0
					end
				)
--			check Result end
		end
end
