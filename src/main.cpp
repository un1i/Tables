#include <iostream>
#include <Windows.h>
#include <vector>
#include <fstream>
#include "UnsortedTable.h";
#include "SortedTable.h"
#include "BSTTable.h"
#include "HashTable.h"

using namespace std;

void read_file(vector <string>& words) {
	string filename, line, word;
	ifstream f;
	words.clear();
	cout << "������� �������� �����: ";
	cin >> filename;
	f.open(filename);
	if (!f.is_open())
		throw runtime_error("�� ������� ������� ����!");

	while (getline(f, line)) {
		size_t prev = 0, pos;
		pos = line.find_first_of(" ,;.", prev);
		while (pos != string::npos) {
			if (pos > prev) {
				word = line.substr(prev, pos - prev);
				words.push_back(word);
			}
			prev = pos + 1;
			pos = line.find_first_of(" ,;.", prev);
		}
		if (prev < line.size())
			words.push_back(line.substr(prev, string::npos));
	}
	f.close();
}

void open_table(Table* table, const vector<string>& words) {
	int exit = 1;
	while (exit) {
		int menu;
		if (dynamic_cast<SortedTable*>(table))
			cout << "��������������� �������:\n";
		else if (dynamic_cast<UnsortedTable*>(table))
			cout << "����������������� �������:\n";
		else if (dynamic_cast<BSTTable*>(table))
			cout << "������� �� ������ ��������� ������:\n";
		else if (dynamic_cast<HashTable*>(table))
			cout << "��� �������:\n";

		cout << "������� 1, ����� ������ ����� � �������\n\
������� 2, ����� �������� ������� � �������\n\
������� 3, ����� ������� ������� �� �������\n\
������� 4, ����� �������� ������� �� �������\n\
������� 5, ����� ������� �������\n";

		if (dynamic_cast<BSTTable*>(table))
			cout << "������� 6, ����� ������� ������ �� �������\n";

cout << "������� 0, ����� ��������� � ������ �������\n";

		cin >> menu;
		switch (menu) {
		case 1: {
			system("CLS");
			try {
				if (!words.size()) {
					cout << "������� ����� ������ ����� �� �����!" << endl;
					break;
				}

				for (string word : words)
					table->add(word);
				cout << "����� ������� �������� �  �������!\n";
			}
			catch (exception e) {
				cout << e.what() << endl;
			}
			break;
		}
		case 2: {
			system("CLS");
			string key;
			cout << "������� ����: ";
			cin >> key;
			try {
				table->add(key);
				cout << "������� ������� ��������!\n���������� ������� ��� ����������: " << table->get_counter() << endl;
			}
			catch (exception e) {
				cout << e.what() << endl;
			}
			break;
		}
		case 3: {
			system("CLS");
			string key;
			cout << "������� ����: ";
			cin >> key;
			table->del(key);
			cout << "������� ������� ������!\n���������� ������� ��� ��������: " << table->get_counter() << endl;
			break;
		}
		case 4: {
			system("CLS");
			int elem;
			string key;
			cout << "������� ����: ";
			cin >> key;
			elem = table->get(key);
			cout << key << " - " << elem << endl;
			cout << "���������� �������� ��� ������ �������� : " << table->get_counter() << endl;
			break;
		}
		case 5: {
			system("CLS");
			table->print();
			break;
		}
		case 6: {
			system("CLS");
			BSTTable* tmp;
			tmp = dynamic_cast<BSTTable*>(table);
			if (tmp)
				tmp->print_tree();
			break;
		}
		case 0: {
			system("CLS");
			return;
			break;
		}
		default: {
			system("CLS");
			break;
		}
		}
	}
}

int main() {
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	vector <string> words;
	int exit = 1, menu;
	Table* tables[] = { new UnsortedTable, new SortedTable, new BSTTable, new HashTable };

	while(exit){
		cout << "������� 1, ����� ������ ����� �� �����\n\
������� 2, ����� ������������ ����������������� �������\n\
������� 3, ����� ������������ ��������������� �������\n\
������� 4, ����� ������������ ������� �� ������ ��������� ������\n\
������� 5, ����� ������������ ��� �������\n\
������� 0, ����� ��������� ������\n";
		cin >> menu;
		switch (menu) {
		case 1: {
			int type;
			system("CLS");
			try {
				read_file(words);
				cout << "����� ������� ������!\n";
			}
			catch(exception e){
				cout << e.what() << endl;;
			}
			break;
		}
		case 2: {
			system("CLS");
			open_table(tables[menu - 2], words);
			delete tables[menu - 2];
			tables[menu - 2] = new UnsortedTable;
			break;
		}
		case 3: {
			system("CLS");
			open_table(tables[menu - 2], words);
			delete tables[menu - 2];
			tables[menu - 2] = new SortedTable;
			break;
		}
		case 4: {
			system("CLS");
			open_table(tables[menu - 2], words);
			delete tables[menu - 2];
			tables[menu - 2] = new BSTTable;
			break;
		}
		case 5: {
			system("CLS");
			open_table(tables[menu - 2], words);
			delete tables[menu - 2];
			tables[menu - 2] = new HashTable;
			break;
		}
		case 0: {
			system("CLS");
			exit = 0;
			break;
		}
		default: {
			system("CLS");
			break;
		}
		}
	}
}