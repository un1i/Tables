#pragma once
#include "../src/UnsortedTable.h"

class UnsortedTableTest : public UnsortedTable {
public:
	UnsortedTableTest() : UnsortedTable() {};
	UnsortedTableTest(int cz, Entry* entr) {
		cur_size = cz;
		entries = entr;
	}
	Entry* get_entries() { return entries; }
	int get_size() { return cur_size; }
};	

void add_unsorted_table_test();
void del_unsorted_table_test();
void get_unsorted_table_test();
void run_unsorted_table_tests();

