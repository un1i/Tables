#pragma once
#include "Table.h"

class UnsortedTable : public Table {
protected:
	Entry* entries;
	int MAX_SIZE;
	int cur_size;
public:
	explicit UnsortedTable(int MAX_SIZE = 1000);
	UnsortedTable(const UnsortedTable&);
	int search(const std::string& key);
	void add(const std::string& key) override;
	int del(const std::string& key) override;
	int get(const std::string& key) override;
	void print() const override;
	bool is_empty() const override;
	bool is_full() const override;
};
