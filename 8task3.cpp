////Дан ориентированный граф. Подсчитать полустепень исхода каждой вершины.
//#include <iostream>
//#include <fstream>
//#include <vector>
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
//	for (int i = 0; i < N; i++) {
//		cout << "Полустепень исхода " << i << " вершины : " << Reb[i].size() << endl;
//	}
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