#include <iostream>
#include "../tests/UnsortedTableTest.h";
#include "../tests/SortedTableTest.h"
#include "BSTTable.h"

int main() {
	run_unsorted_table_tests();
	run_sorted_table_tests();
	BSTTable table;
	table.add("a");
	table.add("b");
	table.add("c");
	table.add("d");
	table.del("b");
	table.print_tree();
}