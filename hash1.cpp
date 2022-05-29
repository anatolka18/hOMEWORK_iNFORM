//Метод деления по стажу
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

ifstream in("input.txt");

struct chel {
	string name;
	string work;
	string data;
	int experience = 0;
	string salary;
};

struct list {
	chel inf;
	list* next;
	list* prev;
};

void push(list*& h, list*& t, chel x) {
	list* r = new list;
	r->inf = x;
	r->next = nullptr;
	if (!h && !t) {
		r->prev = nullptr;
		h = r;
	}
	else {
		t->next = r;
		r->prev = t;
	}
	t = r;
}

void print(list* h, list* t) {
	list* p = h;
	while (p) {
		cout << p->inf.name << " " << p->inf.work << " " << p->inf.data << " " << p->inf.experience << " " << p->inf.salary << endl;
		p = p->next;
	}
}

void del_node(list*& h, list*& t, list* r) {
	if (r == h && r == t)
		h = t = nullptr;
	else if (r == h) {
		h = h->next;
		h->prev = nullptr;
	}
	else if (r == t) {
		t = t->prev;
		t->next = nullptr;
	}
	else {
		r->next->prev = r->prev;
		r->prev->next = r->next;
	}
	delete r;
}

vector<chel> inFile() {
	vector<chel> x;
	chel man;
	while (in.peek() != EOF) {
		in >> man.name;
		in >> man.work;
		in >> man.data;
		in >> man.experience;
		in >> man.salary;
		x.push_back(man);
	}
	return x;
}

list* find(list* h, list* t, int x) {
	list* p = h;
	while (p) {
		if (p->inf.experience == x)
			break;
		p = p->next;
	}
	return p;
}

vector<chel>  Add_people(vector <pair<list*, list*>>& Hash, int M, vector<chel> people) {
	chel man;
	cout << "Add person :" << endl;
	cin >> man.name;
	cin >> man.work;
	cin >> man.data;
	cin >> man.experience;
	cin >> man.salary;

	push(Hash[man.experience % M].first, Hash[man.experience % M].second, man);
	people.push_back(man);

	cout << "HASH TABLE(after adding person): " << endl;
	for (int i = 0; i < Hash.size(); ++i) {
		cout << i << " : " << endl;
		print(Hash[i].first, Hash[i].second);
		cout << endl;
	}
	return people;
}

int main() {
	vector<chel> people;
	people = inFile();
	int M = 10;
	vector <pair<list*, list*>> Hash;
	Hash.resize(M);
	for (int i = 0; i < M; ++i) {
		Hash[i].first = NULL;
		Hash[i].second = NULL;
	}
	for (int i = 0; i < people.size(); i++) {
		push(Hash[people[i].experience % M].first, Hash[people[i].experience % M].second, people[i]);
	}
	cout << "HASH TABLE : " << endl;
	for (int i = 0; i < Hash.size(); ++i) {
		cout << i << " : " << endl;
		print(Hash[i].first, Hash[i].second);
		cout << endl;
	}

	people = Add_people(Hash, M, people);
	cout << endl;
	cout << endl;

	int k;
	cout << "Enter the person's experience to search : ";
	cin >> k;
	list* p = find(Hash[k % M].first, Hash[k % M].second, k);
	if (p) {
		cout << p->inf.name << " " << p->inf.work << " " << p->inf.data << " " << p->inf.experience << " " << p->inf.salary << endl;
	}
	else {
		cout << " Nothing was found " << endl;
	}

	cout << "Enter the person's experience to delete : ";
	cin >> k;
	p = find(Hash[k % M].first, Hash[k % M].second, k);
	if (p) {
		del_node(Hash[p->inf.experience % M].first, Hash[p->inf.experience % M].second, p);
	}
	else {
		cout << " Nothing was found " << endl;
	}
	cout << "HASH TABLE(after delete person): " << endl;
	for (int i = 0; i < Hash.size(); ++i) {
		cout << i << " : " << endl;
		print(Hash[i].first, Hash[i].second);
		cout << endl;
	}

	return 0;
}