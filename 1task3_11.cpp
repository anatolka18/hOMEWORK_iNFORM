////���� ��� ������������������ ����� �����.� ������ ������������������ ������� ��� ������ ��������,
////�� ������ � ��� ��������.������������� ������ ������������������.
////���������� �� � ���� ��������������� ������������������.
//#include<iostream>
//#include<vector>
//#include<numeric>
//#include<algorithm>
//using namespace std;
//bool Fchet(int chislo) {
//	return (chislo % 2 == 0);
//}
//bool Fnechet(int chislo) {
//	return (chislo % 2 == 1);
//}
//int main() {
//	setlocale(LC_ALL, "Russian");
//	vector<int> vec1;
//	vector<int> vec2;
//	int n1, n2,chislo;
//
//	cout << "������" << endl;
//	cin >> n1;
//	cout << "������������ �������" << endl;
//	for (int i = 0; i < n1; i++) {// �������� ������ 1
//		cin >> chislo;
//		vec1.push_back(chislo);
//	}
//
//	cout << "������" << endl;
//	cin >> n2;
//	cout << "������������ �������" << endl;
//	for (int i = 0; i < n2; i++) {// �������� ������ 2
//		cin >> chislo;
//		vec2.push_back(chislo);
//	}
//
//	cout << "�� ����� : " << endl;
//	for (vector<int>::iterator iter = vec1.begin(); iter != vec1.end(); iter++)// ������ ������ 1
//		cout << *iter << ' ';
//	cout << endl;
//	for (vector<int>::iterator iter = vec2.begin(); iter != vec2.end(); iter++)// ������ ������ 2
//		cout << *iter << ' ';
//	cout << endl;
//
//	vector<int>::iterator iter = remove_if(vec1.begin(), vec1.end(), Fchet);
//	vec1.erase(iter, vec1.end());// ������ �������� ��������
//
//	vector<int>::iterator ite = remove_if(vec2.begin(), vec2.end(), Fnechet);
//	vec2.erase(ite, vec2.end());// ������ �������� ��������
//
//	cout << "��������� : " << endl;
//	for (vector<int>::iterator iter = vec1.begin(); iter != vec1.end(); iter++)// ������ ������ 1
//		cout << *iter << ' ';
//	cout << endl;
//	for (vector<int>::iterator iter = vec2.begin(); iter != vec2.end(); iter++)// ������ ������ 2
//		cout << *iter << ' ';
//	cout << endl;
//	
//	sort(vec1.begin(), vec1.end());// ����������
//	sort(vec2.begin(), vec2.end());
//
//	cout << "��������� : " << endl;
//	for (vector<int>::iterator iter = vec1.begin(); iter != vec1.end(); iter++)// ������ ������ 1
//		cout << *iter << ' ';
//	cout << endl;
//	for (vector<int>::iterator iter = vec2.begin(); iter != vec2.end(); iter++)// ������ ������ 2
//		cout << *iter << ' ';
//	cout << endl;
//
//	vec1.insert(vec1.end(), vec2.begin(), vec2.end());
//	sort(vec1.begin(), vec1.end());
//
//	cout << "���� : " << endl;
//	for (vector<int>::iterator iter = vec1.begin(); iter != vec1.end(); iter++)// ������ ������ 1
//		cout << *iter << ' ';
//	cout << endl;
//
//	return 0;
//}