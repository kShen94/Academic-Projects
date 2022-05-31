note
	description: "Summary description for {TEST_MATRIX}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_MATRIX

inherit
	ES_TEST

create
	make

feature
	make
		do
			add_boolean_case (agent test_make)
			add_boolean_case (agent test_make_from)
			add_boolean_case (agent test_getter)
			add_boolean_case (agent test_setter)
			add_boolean_case (agent test_get_row)
			add_boolean_case (agent test_get_column)
			add_boolean_case (agent test_transpose)
			add_boolean_case (agent test_scalar)
			add_boolean_case (agent test_is_equal)
			add_violation_case_with_tag("non_empty_list_of_lists", agent test_empty_list)
		end



feature
	list: LINKED_LIST[LINKED_LIST[ENTRY]]
		local

			lol: LINKED_LIST[LINKED_LIST[ENTRY]]
			r1, r2, r3: LINKED_LIST[ENTRY]
			e1, e2, e3, e4, e5, e6: ENTRY
			column_1: LINKED_LIST[ENTRY]
		do
			create r1.make
			create r2.make
			create r3.make
			create {ENTRY} e1.make (0, "a")
			create {ENTRY} e2.make (4, "b")
			create {ENTRY} e3.make (7, "c")
			create {ENTRY} e4.make (0, "d")
			create {ENTRY} e5.make (3, "e")
			create {ENTRY} e6.make (1, "f")
			r1.extend (e1)
			r1.extend (e2)
			r2.extend (e3)
			r2.extend (e4)
			r3.extend (e5)
			r3.extend (e6)
			create lol.make		-- [0,a][4,b]
			lol.extend (r1)		-- [7,c][0,d]
			lol.extend (r2)		-- [3,e][1,f]
			lol.extend (r3)		--
			result := lol
	end
	test_make: BOOLEAN
	local
		m1 : MATRIX
		do
			create m1.make (3,2)
			result := m1.number_of_rows =3 and
				m1.number_of_columns =2 and
				m1.number_of_entries = 3*2
			check result end


	end
	test_make_from: BOOLEAN
		local
			m1:MATRIX
		do
			create m1.make_from (list)
			result := m1.number_of_rows =3 and
				m1.number_of_columns =2 and
				m1.number_of_entries = 3*2
			check result end
		end
	test_getter:BOOLEAN
		local
			m1 : MATRIX
			return : ENTRY
			do
				create m1.make_from (list)
				return := m1.get_entry (2, 1)
				result := return.sv ~ "f" and return.iv ~ 1
			end
	test_setter:BOOLEAN
		local
			m1: MATRIX
			e1: ENTRY
		do
			create m1.make_from (list)
			create e1.make (5, "K")
			m1.set_entry (e1, 1, 1)
			result := m1.get_entry (1, 1).sv ~ "K" and m1.get_entry (1, 1).iv ~ 5
		end
	test_get_row: BOOLEAN
		local
			m1: MATRIX
			return : ARRAY[ENTRY]
			e1: ENTRY
			e2: ENTRY
		do
			create e1.make (0, "a")
			create e2.make (4, "b")
			create m1.make_from(list)
			return := m1.get_row(0)
			result := return[1] ~ e1 and return[2] ~ e2
		end
	test_get_column : BOOLEAN
		local
			m1: MATRIX
			return : LINKED_LIST[ENTRY]
			e1 : ENTRY
			e2 : ENTRY
			e3 : ENTRY
		do
			create e1.make (0, "a")
			create e2.make (7, "c")
			create e3.make (3, "e")
			create m1.make_from(list)
			return := m1.get_column (0)
			result := return[1] ~ e1 and return[2] ~ e2
		end
	test_scalar : BOOLEAN
		local
			m1 : MATRIX
			return : MATRIX
		do
			create m1.make_from(list)
			return := m1.scalar_multiply (2)
			result :=
			across 0 |..| (m1.number_of_rows-1) as r
			all
				across 0 |..| (m1.number_of_columns-1) as c
				all
					return.get_entry (r.item, c.item).iv ~ (m1.get_entry (r.item, c.item).iv *2)
				end
			end
		end
	test_transpose : BOOLEAN
		local
			m1 : MATRIX
			return : MATRIX
		do
			create m1.make_from (list)
			return := m1.transpose
			result := across 0 |..| (m1.number_of_rows-1) as r
			all
				across 0 |..| (m1.number_of_columns-1) as c
				all
					m1.get_entry (r.item, c.item) ~ return.get_entry (c.item, r.item)
				end
			end
		end
	test_is_equal : BOOLEAN
		local
			m1 : MATRIX
			m2 : MATRIX
		do
			create m1.make_from (list)
			create m2.make_from (list)
			result := m1.is_equal (m2)
		end
	test_empty_list
		local
			lol: LINKED_LIST[LINKED_LIST[ENTRY]]
			m1 : MATRIX
		do
			create lol.make
			create m1.make_from (lol)
		end
end
