////10. Нечетные строки по убыванию, четные по возрастанию помощью гномьей сортировки.
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
//
//vector<int> sortdwarfchet(vector<int> vec, int n) {
//	int i = 0;
//	while (i < n) {
//		if (i == 0 ) {
//			++i;
//		}			
//		if (vec[i - 1] <= vec[i]) {
//			++i;
//		}
//		else {
//			swap(vec[i - 1], vec[i]);
//			i--;
//		}
//	}
//	return vec;
//}
//
//vector<int> sortdwarfNchet(vector<int> vec, int n) {
//	int i = 0;
//	while (i < n) {
//		if (i == 0) {
//			i++;
//		}
//		if (vec[i - 1] >= vec[i]) {
//			i++;
//		}
//		else {
//			swap(vec[i - 1], vec[i]);
//			i--;
//		}
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
//	int k = 0;
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			vec[i][j] = v[j+k];      // разбор строк в иcходнике и пререзпись их отдельно
//		}
//		k+=n;
//	}
//
//	for (int i = 0; i < n; ++i) {
//		if (i % 2 == 0) {
//			vec[i] = sortdwarfchet(vec[i], n);
//		}
//		if (i % 2 != 0) {
//			vec[i] = sortdwarfNchet(vec[i], n);
//		}
//
//	}
//
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			out << vec[i][j] << " ";
//		}
//		out << endl;
//	}
//	return 0;
//}