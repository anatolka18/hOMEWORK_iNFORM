////ќсновна€ Ч линейное хеширование, вспомогательна€ Ч метод умножени€ по стажу
//#include <iostream>
//#include <cmath>
//#include <fstream>
//#include <string>
//#include <vector>
//#include<algorithm>
//using namespace std;
//
//ifstream in("input.txt");
//
//struct chel {
//	string name;
//	string work;
//	string data;
//	int experience = 0;
//	int salary = 0;
//};
//
//vector<chel> inFile() {
//	vector<chel> x;
//	chel man;
//	while (in.peek() != EOF) {
//		in >> man.name;
//		in >> man.work;
//		in >> man.data;
//		in >> man.experience;
//		in >> man.salary;
//		x.push_back(man);
//	}
//	return x;
//}
//
//
//
//int main() {
//	vector<chel> people;
//	people = inFile();
//	int M = 25;
//	double A = 0.61803;
//	vector <chel> Hash;
//	Hash.resize(M);
//	for (int i = 0; i < M; i++) {
//		Hash[i].salary = -1;
//	}
//
//	for (int i = 0; i < people.size(); i++) {
//		int j = 0;
//		double x = A * people[i].salary;
//		double n;
//		int k = M * modf(x, &n);
//		while (true) {
//			int p = k + j;
//			if (Hash[p].salary == -1) {
//				Hash[p] = people[i];
//				break;
//			}
//			else {
//				j++;
//			}
//		}
//
//	}
//	cout << "HASH TABLE : " << endl;
//	for (int i = 0; i < M; ++i) {
//		cout << i << " : ";
//		if (Hash[i].salary != -1)
//			cout << Hash[i].name << " " << Hash[i].work << " " << Hash[i].data << " " << Hash[i].experience << " " << Hash[i].salary << endl;
//		else
//			cout << "NULL" << endl;;
//	}
//	cout << endl;
//
//	cout << "Add person :" << endl;
//	chel man;
//	cin >> man.name;
//	cin >> man.work;
//	cin >> man.data;
//	cin >> man.experience;
//	cin >> man.salary;
//	if (man.salary != -1) {
//		int j = 0;
//		double x = A * man.salary;
//		double n;
//		int k = M * modf(x, &n);
//		while (true) {
//			int p = k + j;
//			if (Hash[p].salary == -1) {
//				Hash[p] = man;
//				break;
//			}
//			else {
//				j++;
//			}
//		}
//	}
//	cout << endl;
//	cout << "HASH TABLE(after adding person): " << endl;
//	for (int i = 0; i < M; ++i) {
//		cout << i << " : ";
//		if (Hash[i].salary != -1)
//			cout << Hash[i].name << " " << Hash[i].work << " " << Hash[i].data << " " << Hash[i].experience << " " << Hash[i].salary << endl;
//		else
//			cout << "NULL" << endl;;
//	}
//	cout << endl;
//
//	int o;
//	cout << "Enter the person's salary to search : ";
//	cin >> o;
//	int j = 0;
//	double x = A * o;
//	double n;
//	int k = M * modf(x, &n);
//	while (true) {
//		int p = k;
//		if (Hash[p].salary == o) {
//			cout << Hash[p].name << " " << Hash[p].work << " " << Hash[p].data << " " << Hash[p].experience << " " << Hash[p].salary << endl;
//			break;
//		}
//		j++;
//	}
//
//	return 0;
//}