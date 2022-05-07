////В файле содержится двумерный массив размерностью n × n.В новый файл вывести отсортированный массив.
////5. Столбцы по возрастанию с помощью пирамидальной сортировки.
//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <algorithm>
//#include <numeric>
//
//using namespace std;
//
//ifstream in("input.txt");
//ofstream out("output.txt");
//
//vector<int> heapify(vector<int> vec, int i, int n) {
//	while (true) {
//		int maxx = i;
//		int l = 2 * i + 1;
//		int r = 2 * i + 2;
//
//		if (l < n && vec[l] > vec[maxx]) {
//			maxx = l;
//		}
//		if (r < n && vec[r] > vec[maxx]) {
//			maxx = r;
//		}
//		if (maxx == i) {
//			break;
//		}
//		else {
//			swap(vec[i], vec[maxx]);
//			i = maxx;
//		}
//	}
//	return vec;
//}
//
//vector<int> sortpiramid(vector<int> vec, int n) {
//	for (int i = n / 2; i >= 0; i--) {
//		vec = heapify(vec, i, n);
//	}
//	for (int i = n - 1; i >= 1; i--) {
//		swap(vec[0], vec[i]);
//		vec = heapify(vec, 0,i);
//	}
//	return vec;
//}
//
//int main() {
//	vector<int> v;
//	int n;
//	in >> n;
//	int a ;
//	while (in.peek() != EOF) {
//		in >> a; 
//		v.push_back(a); // ввод данных в вектор
//	}
//	vector<vector<int>> vec;
//
//	vec.resize(n);
//	for (int i = 0; i < n; ++i) {
//		vec[i].resize(n);
//	}
//	for (int i = 0; i < n; ++i) {
//		int k = 0;
//		for (int j = 0; j < n; ++j) {
//			vec[i][j] = v[i + k];      // разбор столбцов в иходнике и пререзпись их отдельно
//			k += n;
//		}
//	}
//
//	for (int i = 0; i < n; ++i) {
//		vec[i] = sortpiramid(vec[i], n);
//	}
//
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {// перевернутый вывод, для разворота строчек в столбцы
//			out << vec[j][i] << " ";
//		}
//		out << endl;
//	}
//	return 0;
//}