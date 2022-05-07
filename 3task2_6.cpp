////Сначала по фамилии, потом по должности с помощью сортировки Шелла с шагом 2
////Работа обязательно с файлами. В файле содержатся данные о сотрудниках предприятия: фамилия, должность, дата
////рождения(день, месяц, год), стаж работы, зарплата(не менее 20 человек)
////ABCDEFGHIJKLMNOPQRSTUVWXYZ
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include<algorithm>
//using namespace std;
//
//ifstream in("input.txt");
//ofstream out("output2.txt");
//
//struct chel {
//	string name;
//	string work;
//	string data;
//	string experience;
//	string salary;
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
//bool operator > (chel a, chel b) {
//	if (a.name[0] > b.name[0]) return true;
//	if (a.name[0] == b.name[0] && a.work[0] > b.work[0]) return true;
//	return false;
//}
//
//vector<chel> sorti(vector <chel> man) {
//	int N = man.size();
//	int step = (N / 2);
//	while (step >= 1) {
//		for (int i = 0; i < N - step; i++) {
//			int j = i;
//			while ((j >= 0) && (man[j] > man[j + step])) {
//				swap(man[j], man[j + step]);
//				j -= step;
//			}
//		}
//		step = (step / 2);
//	}
//	return man;
//}
//
//
//void print(chel man) {
//	out << man.name << " " << man.work << " " << man.data << " " << man.experience << " " << man.salary << endl;
//}
//
//int main() {
//	setlocale(LC_ALL, "Russian");
//	vector<chel> people;
//	people = inFile();
//	people = sorti(people);
//	for (int i = 0; i < people.size(); i++)
//		print(people[i]);
//	return 0;
//}