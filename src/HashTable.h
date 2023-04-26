#include "Table.h"
#include "../list/List.h"

class HashTable : public Table {
private:
	List* entries;
	static const int SIZE = 1021;
	unsigned int get_hash(const std::string& value);
public:
	HashTable();
	~HashTable();
	void add(const std::string& key);
	int del(const std::string& key);
	int get(const std::string& key);
	void print() const;
	bool is_empty() const;
	bool is_full() const;
};