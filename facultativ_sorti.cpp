////ƒан набор целых чисел. ќтсортировать их по возрастанию, использу€ одну из следующих сортировок:
////“имсорт
//#include <vector>
//#include<algorithm>
//#include<iostream>
//#include <stack>
//#include <time.h>
//using namespace std;
//
//
//int GetMinrun(int n) // считаем минимальный размер упор€доченной последовательности
//{
//	int r = 0;          
//	while (n >= 64) {
//		r |= n & 1;
//		n >>= 1; // == n / 2
//	}
//	return n + r; 
//}
//
//vector<int> sortinsert(vector<int> k) { // сортировка вставками
//	for (int i = 1; i < k.size(); i++) {
//		int j = i;
//		while ((j > 0) && (k[j] < k[j - 1])) {
//			swap(k[j], k[j - 1]);
//			j--;
//		}
//	}
//	return k;
//}
//vector<int> sortmerge(vector<int>a, vector<int>b) {// сортировка сли€нием
//	if (a.size() < b.size()) {
//		vector<int> c = a;
//		a.clear();
//		a.resize(c.size() + b.size());
//		int kc = 0, kb = 0;
//		while (kc != c.size() || kb != b.size()) {
//			if (c.at(kc) < b.at(kb)) {
//				a.at(kc + kb) = c.at(kc);
//				kc++;
//			}
//			else {
//				a.at(kc + kb) = b.at(kb);
//				kb++;
//			}
//		}
//		if (c.empty()) {
//			a.insert(a.end(), b.begin(), b.end());
//		}
//		else {
//			a.insert(a.end(), c.begin(), c.end());
//		}
//
//	}
//	else {
//		vector<int> c = b;
//		b.clear();
//		b.resize(c.size() + a.size());
//		int kc = 0, ka = 0;
//		while (kc!=c.size() || ka != a.size()) {
//			if (c.at(kc) < a.at(ka)) {
//				b.at(kc+ka) = c.at(kc);
//				kc++;
//			}
//			else {
//				b.at(kc + ka) = (a.at(ka));
//				ka++;
//			}
//		}
//		if (c.empty()) {
//			b.insert(b.end(), a.begin(), a.end());
//		}
//		else {
//			b.insert(b.end(), c.begin(), c.end());
//		}
//		a = b;
//	}
//	//cout << "»тог" << endl;
//	//for (int i = 0; i < a.size(); i++) {
//	//	cout << a.at(i) << " ";
//	//}
//	cout << endl;
//	return a;
//}
//
//vector<int> sort1(vector <int> vec, int n) {
//	int minrun = GetMinrun(n);
//	vector<int> run;
//	vector<vector<int>> subsectors;
//	run.push_back(vec.at(0));
//	for (int i = 1; i < n; i++) {
//		if (vec.at(i - 1) <= vec.at(i)) {// поиск упор€доченного подмассива во входном массиве
//			run.push_back(vec.at(i));
//		}
//		else {
//			i--;
//			if (run.size() < minrun) {
//				while ((run.size() != minrun) && (!vec.empty())) {
//					i++;
//					run.push_back(vec.at(i));// если размер меньше нужного добавл€ю до размера minrun
//				}
//				run = sortinsert(run);
//			}
//			subsectors.push_back(run);
//			run.clear();
//		}
//
//	}
//	vector<vector<int>> finaly;
//	finaly.push_back(subsectors[0]);
//	finaly.push_back(subsectors[1]);
//	finaly.push_back(subsectors[2]);
//	for (int i = 2; i < subsectors.size(); i++) {
//		finaly[2] = subsectors[i];
//		if ((finaly[1].size() > (finaly[0].size() + finaly[2].size())) && (finaly[1].size() > finaly[2].size())) {
//			finaly[1] = sortmerge(finaly[2], finaly[1]);
//		}
//		else {
//			if (finaly[2].size() < finaly[0].size()) {//сли€ние третьего со вторым
//				finaly[1] = sortmerge(finaly[1], finaly[2]);
//			}
//			else {//сли€ние первого со вторым
//				finaly[0] = sortmerge(finaly[1], finaly[0]);
//				finaly[1] = finaly[2];
//			}
//		}
//		//cout << "merge 2" << endl;
//		//for (int i = 0; i < finaly.size(); i++) {
//		//	for (int j = 0; j < finaly[i].size(); j++)
//		//		cout << finaly[i].at(j) << " ";
//		//	cout << endl;
//		//	cout << endl;
//		//}
//
//	}
//
//	return vec;
//}
//
//int main() {
//	setlocale(LC_ALL, "Russian");
//	int n, chislo, v6bor;
//	vector<int> vec;
//	cout << "–азмер" << endl;
//	cin >> n;
//
//	for (int i = 0; i < n; ++i) {
//		vec.push_back(rand() % 100);
//	}
//
//	cout << "¬вод : " << endl;
//	for (int i = 0; i < vec.size(); i++)
//		cout << vec.at(i) << " ";
//	cout << endl;
//
//	vec = sort1(vec, n);
//
//	for (int i = 0; i < vec.size(); i++)
//		cout << vec.at(i) << " ";
//	cout << endl;
//
//	return 0;
//}