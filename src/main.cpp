#include <iostream>
#include "../tests/UnsortedTableTest.h";
#include "../tests/SortedTableTest.h"
#include "BSTTable.h"
#include "HashTable.h"

int main() {
	run_unsorted_table_tests();
	run_sorted_table_tests();
	HashTable table;
}