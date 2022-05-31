note
	description: "Summary description for {TUPLE_ITERATION_CURSOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TUPLE_ITERATION_CURSOR[V -> attached ANY,K -> attached ANY] -- V2, K, V1
inherit
	ITERATION_CURSOR[TUPLE[V,K]]

create
	make

feature -- Constructor
	make (v: LINKED_LIST[V]; k: ARRAY[K])
		do
			value := v
			keys := k
			cursor_pos := v.lower
		end

feature{NONE} -- Collections
	value : LINKED_LIST[V]
	keys : ARRAY[K]
	cursor_pos : INTEGER

feature -- Cursor Operations
item : TUPLE[V,K]
	local
		v: V
		k : K
	do
		v := value[cursor_pos]
		k := keys[cursor_pos]
		Result := [v,k]
	end

after : BOOLEAN
	do
		Result := cursor_pos > value.count
	end

forth
	do
		cursor_pos := cursor_pos + 1
	end
end
