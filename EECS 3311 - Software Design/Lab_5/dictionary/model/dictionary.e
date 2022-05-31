note
	description: "A Dictionary ADT mapping from keys to values"
	author: "Jackie and You"
	date: "$Date$"
	revision: "$Revision$"

class
	-- Constrained genericity because V and K will be used
	-- in the math model class FUN, which require both to be always
	-- attached for void safety.
	DICTIONARY[V -> attached ANY, K -> attached ANY]
inherit
	ITERABLE[TUPLE[V, K]]

create
	make
feature -- Do not modify this export status!
	values: LINKED_LIST[V]
	keys: ARRAY[K]

feature -- Abstraction function
	model: FUN[K, V] -- Do not modify the type of this query.
			-- Abstract the dictionary ADT as a mathematical function.
		do
			-- Your Task
			create result.make_empty
			across 1 |..| current.count as c
			loop
				result.extend (create {PAIR[K,V]}.make_from_tuple ([keys[c.item],values[c.item]]))
			end

		ensure
			consistent_model_imp_counts:
				-- Your Task: sizes of model and implementations the same
				result.count ~ current.count
			consistent_model_imp_contents:
				-- Your Task: applying the model function on each key gives back the corresponding value
			across 1 |..| current.count as c
			all
				result[keys[c.item]] ~ values[c.item]
			end
		end

feature -- feature required by ITERABLE
	new_cursor: TUPLE_ITERATION_CURSOR[V, K] -- Do not change this return type.
		do
			-- Your Task
			create result.make (values, keys)
		end

feature -- Constructor
	make
			-- Initialize an empty dictionary.
		do
			-- Your Task: add more code here
			create values.make
			create keys.make_empty
			values.compare_objects
			keys.compare_objects
		ensure
			empty_model:
				-- Your Task.
				model.is_empty
			object_equality_for_keys:
				-- Do not modify this.
				keys.object_comparison
			object_equality_for_values:
				-- Do not modify this.
				values.object_comparison
		end

feature -- Commands

	add_entry (v: V; k: K)
		require
			non_existing_key_in_model:
				-- Your Task.
				not(model.has ([k,v]))
		do
			-- Your Task.
			values.force (v)
			keys.force (k, keys.count+1)
		ensure
			entry_added_to_model:
				-- Your Task.
				-- Hint: Look at feature 'test_add' in class 'EXAMPLE_DICTIONARY_TESTS'.
			count ~ (old count) +1 and model ~ (old model).extended (create {PAIR[K,V]}.make (k, v))
		end

	add_entries (entries: SET[TUPLE[k: K; v: V]])
		require
			non_existing_keys_in_model:
				-- Your Task.
			across entries as e
			all
				not model.has(e.item)
			end
		do
			-- Your Task.
			across entries as e
			loop
				check attached {K} e.item[1] as k then
				check attached {V} e.item[2] as v then
					add_entry(v,k)
				end
				end
			end
		ensure
			entries_added_to_model:
				-- Your Task.
				-- Hint: Look at feature 'test_add' in class 'EXAMPLE_DICTIONARY_TESTS'.
				count ~ (old count)+ entries.count and model ~ (old model).unioned (create {FUN[K,V]}.make_from_array (entries.as_array))
		end

	remove_entry (k: K)
		require
			existing_key_in_model:
				-- Your Task.
				model.domain.has (k)

		local
			keys_copy : ARRAY[K]
		do
			-- Your Task.
			keys_copy := keys
			across 1 |..| current.count as c
			loop
				if(keys[c.item] ~ k) then
					values.go_i_th (c.item)
					values.remove
					keys_copy := keys.subarray (1, c.item-1)
					across keys.subarray (c.item +1, keys.count) as kc
					loop
						keys_copy.force (kc.item,keys_copy.count+1)
					end
				end
			end
			keys := keys_copy
		ensure
			entry_removed_from_model:
				-- Your Task.
				-- Hint: Look at feature 'test_remove' in class 'EXAMPLE_DICTIONARY_TESTS'.
				count ~ (old count)-1 and (old model).differenced (model).domain.has (k)
		end

	remove_entries(ks: SET[K])
		require
			existing_keys_in_model:
				-- Your Task.
				across ks as k
				all
					model.domain.has (k.item)
				end
		do
			-- Your Task.
			across ks as k
			loop
				remove_entry(k.item)
			end
		ensure
			entries_removed_from_model:
				-- Your Task.
				-- Hint: Look at feature 'test_add' in class 'EXAMPLE_DICTIONARY_TESTS'.
				count ~ (old count) - ks.count and (old model).differenced (model).domain.intersected (ks) ~ ks
		end

feature -- Queries

	count: INTEGER
			-- Number of keys in dictionary.
		do
			-- Your Task
			result := values.count
		ensure
			correct_result:
				-- Your Task
				values.count ~ keys.count
		end

	get_keys (v: V): ITERABLE[K]
			-- Keys that are associated with value 'v'.
		local
			a_keys : ARRAY[K]
		do
			-- Your Task.
			create a_keys.make_empty
			across 1 |..| current.count as c
			loop
				if(values[c.item] ~ v) then
					a_keys.force (keys[c.item], a_keys.count +1)
				end
			end
		result := a_keys
		ensure
			correct_result:
				-- Your Task: Every key in the result has the right corresponding value in model
				across result as r
				all
					model.range_restricted_by (v).domain.has (r.item)
				end
		end

	get_value (k: K): detachable V
			-- Assocated value of 'k' if it exists.
			-- Void if 'k' does not exist.
		do
			-- Your task.
			across 1 |..| current.count as c
			loop
				if(keys[c.item] ~ k) then
					result := values[c.item]
				end
			end
		ensure
			case_of_void_result:
				-- Your Task: void result means the key does not exist in model
				result ~ void implies not (model.domain.has (k))
			case_of_non_void_result: True
				-- Your Task: void result means the key exists in model
				result /~ void implies model.domain.has (k)
		end
invariant
	-- Do not modify these two invariants.
	consistent_keys_values_counts:
		keys.count = values.count
	consistent_imp_adt_counts:
		keys.count = count
end
