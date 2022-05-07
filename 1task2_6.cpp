////Дана последовательность целых чисел.Найти сумму элементов, кратных Х.
////Вывести минимальный элемент.Все четные элементы заменить на максимальный.
//#include<iostream>
//#include<vector>
//#include<numeric>
//#include<algorithm>
//using namespace std;
//int x;
//bool F(int chislo) {
//	return (chislo % x != 0);
//}
//bool chet(int chislo) {
//	return (chislo % 2 == 0);
//}
//int main() {
//	setlocale(LC_ALL, "Russian");
//	vector<int> vec;// создаю вектор
//	int n, chislo, s = 0, minn, maxx;
//	cout << "Размер" << endl;
//	cin >> n;
//	cout << "Число кратности" << endl;
//	cin >> x;
//	cout << "Внутренности" << endl;
//	for (int i = 0; i < n; i++) {// заполняю вектор
//		cin >> chislo;
//		vec.push_back(chislo);
//	}
//
//	vector<int> vec1(vec);// создаю копию первого
//
//	cout << "Вы ввели : " << endl;
//	for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)// вывожу вектор
//		cout << *iter << ' ';
//	cout << endl;
//
//	vector<int>::iterator iter = min_element(vec.begin(), vec.end());
//	minn = *iter; // минимальный элемент 
//
//	vector<int>::iterator ite = remove_if(vec.begin(), vec.end(), F);
//	vec.erase(ite, vec.end());// удаляю ненужные элементы
//
//	cout << "Изменения : " << endl;
//	for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)// вывожу вектор
//		cout << *iter << ' ';
//	cout << endl;
//
//	s = std::accumulate(vec.begin(), vec.end(), 0);// считаю сумму
//
//	vector<int>::iterator it = max_element(vec1.begin(), vec1.end());
//	maxx = *it; // максимальный элемент
//	replace_if(vec1.begin(), vec1.end(), chet, maxx);// замена элементов
//
//	cout << "Cумма кратных Х :" << endl;
//	cout << s << endl;
//	cout << "Минимальный элемент" << endl;
//	cout << minn << endl;
//	cout << "Конечный вектор" << endl;
//	for (vector<int>::iterator iter = vec1.begin(); iter != vec1.end(); iter++)// вывожу вектор
//		cout << *iter << ' ';
//	cout << endl;
//	system("pause");
//	return 0;
//}