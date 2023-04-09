#pragma once
#include <string>


struct Entry {
	std::string key;
	int value;
};


class Table {
protected:
	int counter;
public:
	Table(): counter(0) {};
	virtual void add(const std::string&) = 0;
	virtual int del(const std::string&) = 0;
	virtual void print() const = 0;
	virtual int get(const std::string&) = 0;
	virtual bool is_empty() const = 0;
	virtual bool is_full() const = 0;
};