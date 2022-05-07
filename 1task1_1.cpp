////Дана последовательность целых чисел.Найти сумму элементов, не попадающих
////в заданный интервал[𝑎, 𝑏].
//#include<iostream>
//#include<vector>
//#include<numeric>
//#include<algorithm>
//using namespace std;
//int a, b;
//bool F(int x) {
//	return ((x >= a) && (x <= b));
//}
//int main() {
//	setlocale(LC_ALL, "Russian");
//	vector<int> vec;// создаю вектор
//	int n, chislo, s = 0;
//	cout << "Размер" << endl;
//	cin >> n;
//	cout << "Диапазон" << endl;
//	cin >> a >> b;
//	cout << "Внутренности" << endl;
//	for (int i = 0; i < n; i++) {// заполняю вектор
//		cin >> chislo;
//		vec.push_back(chislo);
//	}
//
//	cout << "Вы ввели : " << endl;
//	for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)// вывожу вектор
//		cout << *iter << ' ';
//	cout << endl;
//
//	vector<int>::iterator it = remove_if(vec.begin(), vec.end(), F);
//	vec.erase(it, vec.end());// удаляю ненужные элементы
//
//	cout << "Изменения : " << endl;
//	for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)// вывожу вектор
//		cout << *iter << ' ';
//	cout << endl;
//
//	s = std::accumulate(vec.begin(), vec.end(), 0);
//
//	cout << "Получившаяся сумма :" << endl;
//	cout << s;
//	return 0;
//}