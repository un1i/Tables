#include <iostream>
#include <cassert>
#include "SortedTableTest.h"

void add_sorted_table_test() {
	SortedTableTest table;
	Entry true_entries[3];
	true_entries[0].key = "a";
	true_entries[0].value = 1;

	true_entries[1].key = "bc";
	true_entries[1].value = 2;

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
	std::cout << "Add Sorted Table Test - ok" << std::endl;
}

void del_sorted_table_test() {
	Entry* entries = new Entry[3];
	entries[0].key = "a";
	entries[0].value = 1;

	entries[1].key = "bc";
	entries[1].value = 2;

	entries[2].key = "zf";
	entries[2].value = 3;

	SortedTableTest table(3, entries);
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
	std::cout << "Del Sorted Table Test - ok" << std::endl;
}

void get_sorted_table_test() {
	Entry* entries = new Entry[3];
	entries[0].key = "a";
	entries[0].value = 10;

	entries[1].key = "bc";
	entries[1].value = 2;

	entries[2].key = "zf";
	entries[2].value = 3;

	SortedTableTest table(3, entries);
	std::pair<std::string, int> elem[3];

	elem[0].first = "zf";
	elem[0].second = 3;

	elem[1].first = "bc";
	elem[1].second = 2;

	elem[2].first = "a";
	elem[2].second = 10;

	int res;
	for (int i = 0; i < 3; i++) {
		res = table.get(elem[i].first);
		assert(res == elem[i].second);
	}
	std::cout << "Get Sorted Table Test - ok" << std::endl;
}

void run_sorted_table_tests() {
	std::cout << "Sorted table tests:\n";
	add_sorted_table_test();
	del_sorted_table_test();
	get_sorted_table_test();
}