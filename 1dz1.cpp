////��� ����� �� 10 ����� �����. ������� ������. �������������� ������ ���, ����� ������� ���� ��� ��������, 
////������� 5-�� ��������, ����� �������. (��������, ������ - 2 7 5 8 3  � ������� ������� - ������, 
////���� ����� 2 3 5 7 8)
// 
////��� ����� �� 10 ����� �����.������� ������.��������� ����������� ����� ������ ���,
////����� �� ������ ����� ����� ������ ������������ �������. (��������, ������ - 2 7 5 8 3  ���� �����  8 3 2 7 5).
// 
////��� ����� �� 10 ����� �����.������� ������.�������������� ������ ���, ����� �� ����������� �� ���� ����
////(����� ������ �������� ������, � �������� �������� ������ ����� �����). 
////(��������, ������ - 2 7 5 8 3 ���� ����� - 8 7 5 2 3).
//
////���� ��� ������ �� 10 ����� �����.������� �� ��� ������.����� ��������� ������������ ������ �������.
//
////���� ������.��������� ���������, ����� ���������� ��������� ���� � ������.
//#include<iostream>
//#include<vector>
//#include<list>
//#include <set>
//#include <string>
//#include<algorithm>
//#include <numeric>
//using namespace std;
//void print_v(vector<int> a) {
//	for (vector<int>::iterator iter = a.begin(); iter != a.end(); iter++)// ������  ������
//		cout << *iter << ' ';
//	cout << endl;
//}
//
//void print_l(list<int> a) {
//	for (list<int>::iterator iter = a.begin(); iter != a.end(); iter++)// ������  ������
//		cout << *iter << ' ';
//	cout << endl;
//}
//
//void one (vector<int> a) {
//	cout << "�1 : " << endl;
//	print_v(a);
//	nth_element(a.begin(), a.begin() + 5, a.end());//��������� �������� ���������, ��������� ������ n-� ������� ������������������ � ���������, ����� ��� �������� ����� ���� ���� ������ ��� ����� ���, � ��� ��������, ������� ������� �� ��� � ������������������, ������ ��� ����� ���.
//	print_v(a);
//}
//
//void two(list<int> a) {
//	cout << "�2 : " << endl;
//	print_l(a);
//	list<int>::iterator maxx = max_element(a.begin(), a.end());//���� ����������� �������
//	rotate(a.begin(), maxx, a.end());//������ ������� �������� � ���� �������� ����������.
//	print_l(a);
//}
//
//void tree(vector<int> a) {
//	cout << "�3 : " << endl;
//	print_v(a);
//	make_heap(a.begin(), a.end());//����������� �������� �� ���������� ��������� � ����, � ������� ������ ������� �������� ���������� � ��� ������� �������� ���������� ����� ���� ��������� �������� ����������.
//	print_v(a);
//}
//
//void four(list<int> a, list<int> b) {
//	cout << "�4 : " << endl;
//	print_l(a);
//	print_l(b);
//	cout << inner_product(a.begin(), a.end(), b.begin(), 0) << endl;// ��������� ����� ������������� ��������� ���� ���������� � ��������� �� � ���������� ���������� �������� ���� ��������� ��������� ���������� ���������, ��� �������� �������� ����� � ��������� �������� �� ������ ��������� �������� ��������
//}
//
//void five(set<char> a, string str) {
//	cout << "�5 : " << endl;
//	for (int i = 0; i < str.length(); i++)// �� ���� ��� ����� ����������� �-�� ������������� �� ������� � ���
//		a.insert(str[i]);
//	cout << a.size() << endl;
//}
//
//int main() {
//	vector<int> a = { 1, 2, 33, 41 , 55, 6, 77, 8, 9, 10 };
//	one(a);
//	list<int> b = { 11, 2, 33, 4 , 5, 6, 77, 8, 9, 10 };
//	two(b);
//	vector<int> c = { 1, 22, 3, 41 , 55, 63, 77, 81, 9, 10 };
//	tree(c);
//	list<int> d1 = { 11, 2, 33, 4 , 52, 6, 71, 8, 9, 10 };
//	list<int> d2 = { 11, 22, 3, 4 , 5, 6, 77, 8, 9, 110 };
//	four(d1,d2);
//	set<char> e;
//	string str = "sfdesed334g45ggggggggggggggg";
//	five(e,str);
//	return 0;
//}