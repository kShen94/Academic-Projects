note
	description: "Summary description for {TUPLE_ITERATION_CURSOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TUPLE_ITERATION_CURSOR[K,V1,V2] -- V2, K, V1
inherit
	ITERATION_CURSOR[TUPLE[K,V1,V2]]

create
	make

feature -- Constructor
	make (k: LINKED_LIST[K]; v_1: ARRAY[V1]; v_2: LINKED_LIST[V2])
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
item : TUPLE[K,V1,V2]
	local
		v_1: V1
		v_2: V2
		k : K
	do
		v_1 := value_1[cursor_pos]
		v_2 := value_2[cursor_pos]
		k := keys[cursor_pos]
		Result := [k,v_1,v_2]
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
