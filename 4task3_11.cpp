////Диагонали, параллельные побочной по возрастанию с помощью сортировки пузырьком
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
//vector<int> sortbubble(vector<int> vec, int n) {
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = n - 1; j > i; j--) {
//			if (vec[j - 1] > vec[j]) {
//				swap(vec[j - 1], vec[j]);
//			}
//		}
//	}
//	return vec;
//}
//
//int main() {
//	vector<int>v;
//	int n;
//	in >> n;
//	int a;
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
//
//	int p = 0;
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			vec[i][j] = v[j + p];      // разбор строк в иcходнике и пререзпись их отдельно 
//		}
//		p += n;
//	}
//
//	for (int k = 1; k < 2 * n - 2; k++) {
//		vector<int> vec1;
//		for (int i = 0; i < n; i++) {
//			if (k - i < n && k - i >= 0) {
//				vec1.push_back(vec[i][k - i]);
//			}
//		}
//		vec1 = sortbubble(vec1, vec1.size());
//		int l = 0;
//		for (int i = 0; i < n; i++) {
//			if (k - i < n && k - i >= 0) {
//				vec[i][k - i] = vec1[l];
//				l++;
//			}
//		}
//		vec1.clear();
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