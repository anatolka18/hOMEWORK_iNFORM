////Дан неориентированный граф. Вывести количество вершин, смежных с данной
//#include <iostream>
//#include <fstream>
//#include <vector>
//using namespace std;
//ifstream in("input.txt");

//int main() {
//	setlocale(LC_ALL, "Russian");
//	int E, N;
//	in >> N;
//	vector<vector<int>> Reb;
//	Reb.resize(N);
//	int r;
//	for (int i = 0; i < N; i++) {
//		in >> E;
//		for (int j = 0; j < E; j++){
//			in >> r;
//			Reb[i].push_back(r);
//		}
//	}
//	int num_ver;
//	cout << "Введите номер вершины : " << endl;
//	cin >> num_ver;
//	cout << "Кол-во смежных вершин : " << Reb[num_ver].size() << endl;
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