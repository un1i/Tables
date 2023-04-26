#pragma once
#include "../src/Table.h"


class List {
private:
	Link* first;
	Link* search(const std::string key, int& counter);
public:	
	List();
	List(const List&);
	~List();
	void add(const std::string key, int& counter);
	int del(const std::string key, int& counter);
	int get(const std::string key, int& counter);
	void print(int index);
	bool is_empty();
	void clear();
};