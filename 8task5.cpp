////Дан ориентированный граф.Вывести все истоки графа.
////Вершина ориентированного графа называется истоком, если в неё не входит ни одно ребро
//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <set>
//#include <algorithm>
//using namespace std;
//ifstream in("input.txt");
//
//int main() {
//	setlocale(LC_ALL, "Russian");
//	int E, N;
//	in >> N;
//	vector<vector<int>> Reb;
//	Reb.resize(N);
//	int r;
//	for (int i = 0; i < N; i++) {
//		in >> E;
//		if (E != 0) {
//			for (int j = 0; j < E; j++) {
//				in >> r;
//				Reb[i].push_back(r);
//			}
//		}
//	}
//	set<int> Not_origins;
//	set<int> all;
//	vector<int> origins;
//	for (int i = 0; i < N; i++) {
//		all.insert(i);
//		for (int j = 0; j < Reb[i].size(); j++) {
//			Not_origins.insert(Reb[i][j]);
//		}
//	}
//	set_symmetric_difference(all.begin(), all.end(), Not_origins.begin(), Not_origins.end(), std::back_inserter(origins));
//	cout << "Исходы графа : ";
//	for (auto i = origins.begin(); i != origins.end(); i++) {
//		cout << *i << " ";
//	}
//	cout << endl;
//	return 0;
//}
////5
////1
////3
////2
////2 3
////0
////2
////2 4
////1
////3