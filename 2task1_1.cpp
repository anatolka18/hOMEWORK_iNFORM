////Дана последовательность целых чисел. Найти все такие цифры, которые встречаются только в двузначных числах.
//#include<iostream>
//#include<set>
//#include<vector>
//#include<numeric>
//#include<algorithm>
//using namespace std;
//
//bool F(int a) {
//	return ((a > 9) && (a < 100));
//}
//
//int main() {
//	int n, chislo;
//    setlocale(LC_ALL, "Russian");
//	set<int> setN, setK;
//	cout << "Размер" << endl;
//	cin >> n;
//	cout << "Внутренности " << endl;
//	for (int i = 0; i < n; i++) {// ввожу числа и разбиваю их цифры на два сета
//		cin >> chislo;
//		if (F(chislo)) {
//			setN.insert(chislo / 10);
//			setN.insert(chislo % 10);
//		}
//		else {
//			while (chislo) {
//				setK.insert(chislo % 10);
//				chislo /= 10;
//			}
//		}
//	}
//	for (set<int>::iterator iter = setK.begin(); iter != setK.end(); iter++) {
//		setN.erase(*iter);// удаляю совпадающие 
//	}
//	cout << "Конечный результат" << endl;
//	for (set<int>::iterator iter = setN.begin(); iter != setN.end(); iter++) {
//		cout << *iter << ' '; // вывожу 
//	}
//	cout << endl;
//
//	return 0;
//}