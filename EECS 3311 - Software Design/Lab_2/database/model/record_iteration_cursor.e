note
	description: "Summary description for {RECORD_ITERATION_CURSOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	RECORD_ITERATION_CURSOR[V1,V2,K]
inherit
	ITERATION_CURSOR[RECORD[V1,V2,K]]
create
	make

feature -- Constructor
	make (v_1: ARRAY[V1]; v_2: LINKED_LIST[V2]; k: LINKED_LIST[K])
		do
			value_1 := v_1
			value_2 := v_2
			keys := k
			cursor_pos := v_1.lower
		end

feature{NONE} -- Collections
	value_1 : ARRAY[V1]
	value_2 : LINKED_LIST[V2]
	keys : LINKED_LIST[K]
	cursor_pos : INTEGER

feature -- Cursor Operations
item : RECORD[V1,V2,K]
	local
		v_1: V1
		v_2: V2
		k : K
	do
		v_1 := value_1[cursor_pos]
		v_2 := value_2[cursor_pos]
		k := keys[cursor_pos]
		create result.make (v_1, v_2, k)
	end

after : BOOLEAN
	do
		Result := cursor_pos > value_1.upper
	end

forth
	do
		cursor_pos := cursor_pos + 1
	end
end

