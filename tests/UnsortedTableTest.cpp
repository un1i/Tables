#include <cassert>
#include <iostream>
#include "UnsortedTableTest.h"

void add_unsorted_table_test() {
	UnsortedTableTest table;
	Entry true_entries[3];
	true_entries[0].key = "bc";
	true_entries[0].value = 2;

	true_entries[1].key = "a";
	true_entries[1].value = 1;

	true_entries[2].key = "zf";
	true_entries[2].value = 3;

	table.add("bc");
	table.add("a");
	table.add("zf");
	table.add("bc");
	table.add("zf");
	table.add("zf");
	
	Entry* entries = table.get_entries();
	for (int i = 0; i < 3; i++)
		assert(entries[i].key == true_entries[i].key &&
			entries[i].value == true_entries[i].value);
	std::cout << "Add Unsorted Table Test - ok" << std::endl;
}

void del_unsorted_table_test() {
	Entry* entries = new Entry[3];
	entries[0].key = "bc";
	entries[0].value = 2;

	entries[1].key = "a";
	entries[1].value = 1;

	entries[2].key = "zf";
	entries[2].value = 3;

	UnsortedTableTest table(3, entries);
	std::pair<std::string, int> elem[3];
	elem[0].first = "bc";
	elem[0].second = 2;

	elem[1].first = "a";
	elem[1].second = 1;

	elem[2].first = "zf";
	elem[2].second = 3;

	int res;
	for (int i = 0; i < 3; i++) {
		res = table.del(elem[i].first);
		assert(res == elem[i].second && 3 - i - 1 == table.get_size());
	}
	std::cout << "Del Unsorted Table Test - ok" << std::endl;
}

void get_unsorted_table_test() {
	Entry* entries = new Entry[3];
	entries[0].key = "bc";
	entries[0].value = 2;

	entries[1].key = "a";
	entries[1].value = 1;

	entries[2].key = "zf";
	entries[2].value = 3;

	UnsortedTableTest table(3, entries);
	std::pair<std::string, int> elem[3];

	elem[0].first = "zf";
	elem[0].second = 3;

	elem[1].first = "bc";
	elem[1].second = 2;

	elem[2].first = "a";
	elem[2].second = 1;

	int res;
	for (int i = 0; i < 3; i++) {
		res = table.get(elem[i].first);
		assert(res == elem[i].second);
	}
	std::cout << "Get Unsorted Table Test - ok" << std::endl;
}

void run_unsorted_table_tests() {
	add_unsorted_table_test();
	del_unsorted_table_test();
	get_unsorted_table_test();
}



