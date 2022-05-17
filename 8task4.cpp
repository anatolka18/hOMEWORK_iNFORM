////Дан ориентированный граф.Вывести все вершины, недостижимые из данной.
//#include <iostream>
//#include <fstream>
//#include <vector>
//using namespace std;
//ifstream in("input.txt");
//
//
//void F(int N, vector<vector<int>> Gr) {
//	int num_ver;
//	cout << "Введите номер вершины : " << endl;
//	cin >> num_ver;
//	vector<int> visit;
//	for (int i = 0; i < N; i++) {
//			visit.push_back(0);
//	}
//	visit.resize(N);
//	visit[num_ver] = 1;
//	for (int i = 0; i < Gr[num_ver].size(); i++) {
//		int j = Gr[num_ver][i];
//		if (visit[j] == 0) {
//			visit[j] = 1;
//		}
//	}
//
//	cout << "Вершины недостижимые из данной : " << endl;
//	for (int i = 0; i < N; i++) {
//		if (visit[i] == 0) {
//			cout << i << " ";
//		}
//	}
//	cout << endl;
//}
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
//		for (int j = 0; j < E; j++) {
//			in >> r;
//			Reb[i].push_back(r);
//		}
//	}
//	F(N, Reb);
//	return 0;
//}
////7
////4
////1 2 4 5
////2
////0 3
////2
////0 5
////1
////1
////2
////0 6
////2
////2 6
////2
////4 5