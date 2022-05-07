////По дате рождения (год, месяц, день) с помощью сортировки перемешиванием.
//////Работа обязательно с файлами. В файле содержатся данные о сотрудниках предприятия: фамилия, должность, дата
//////рождения(день, месяц, год), стаж работы, зарплата(не менее 20 человек)
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
//struct date {
//	int dd, mm, yy;
//};
//
//struct chel {
//	string name;
//	string work;
//	date data;
//	string dataa;
//	string experience;
//	string salary;
//};
//
//date Date(string str) {
//	date x;
//	string temp = str.substr(0, 2);
//	x.dd = atoi(temp.c_str());
//	temp = str.substr(3, 5);
//	x.mm = atoi(temp.c_str());
//	temp = str.substr(6, 10);
//	x.yy = atoi(temp.c_str());
//	return x;
//}
//
//vector<chel> inFile() {
//	vector<chel> x;
//	chel man;
//	string s;
//	while (in.peek() != EOF) {
//		in >> man.name;
//		in >> man.work;
//		in >> s;
//		man.dataa = s;
//		s += " ";
//		man.data = Date(s);
//		in >> man.experience;
//		in >> man.salary;
//		x.push_back(man);
//	}
//	return x;
//}
//
//
//bool operator > (chel a, chel b) {
//	if (a.data.yy > b.data.yy) return true;
//	if (a.data.yy == b.data.yy && a.data.mm > b.data.mm) return true;
//	if (a.data.yy == b.data.yy && a.data.mm == b.data.mm && a.data.dd > b.data.dd) return true;
//	return false;
//}
//
//vector<chel> sorti(vector <chel> man) {
//	int N = man.size();
//	int begin = -1;
//	int end = N - 1;
//	while (begin != end+1) {
//		int obmen = 0;
//		begin++;
//		for (int j = begin; j < end; j++) {
//			if (man[j] > man[j + 1]) {
//				obmen++;
//				swap(man[j], man[j + 1]);
//			}
//		}
//		if (obmen == 0) {
//			break;
//		}
//		obmen = 0;
//		end--;
//		for (int j = end; j > begin; j--) {
//			if (man[j] > man[j + 1]) {
//				obmen++;
//				swap(man[j], man[j + 1]);
//			}
//		}
//	}
//	return man;
//}
//
//void print(chel man) {
//	out << man.name << " " << man.work << " " << man.dataa << " " << man.experience << " " << man.salary << endl;
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