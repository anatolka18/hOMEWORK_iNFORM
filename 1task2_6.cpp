////���� ������������������ ����� �����.����� ����� ���������, ������� �.
////������� ����������� �������.��� ������ �������� �������� �� ������������.
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
//	vector<int> vec;// ������ ������
//	int n, chislo, s = 0, minn, maxx;
//	cout << "������" << endl;
//	cin >> n;
//	cout << "����� ���������" << endl;
//	cin >> x;
//	cout << "������������" << endl;
//	for (int i = 0; i < n; i++) {// �������� ������
//		cin >> chislo;
//		vec.push_back(chislo);
//	}
//
//	vector<int> vec1(vec);// ������ ����� �������
//
//	cout << "�� ����� : " << endl;
//	for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)// ������ ������
//		cout << *iter << ' ';
//	cout << endl;
//
//	vector<int>::iterator iter = min_element(vec.begin(), vec.end());
//	minn = *iter; // ����������� ������� 
//
//	vector<int>::iterator ite = remove_if(vec.begin(), vec.end(), F);
//	vec.erase(ite, vec.end());// ������ �������� ��������
//
//	cout << "��������� : " << endl;
//	for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)// ������ ������
//		cout << *iter << ' ';
//	cout << endl;
//
//	s = std::accumulate(vec.begin(), vec.end(), 0);// ������ �����
//
//	vector<int>::iterator it = max_element(vec1.begin(), vec1.end());
//	maxx = *it; // ������������ �������
//	replace_if(vec1.begin(), vec1.end(), chet, maxx);// ������ ���������
//
//	cout << "C���� ������� � :" << endl;
//	cout << s << endl;
//	cout << "����������� �������" << endl;
//	cout << minn << endl;
//	cout << "�������� ������" << endl;
//	for (vector<int>::iterator iter = vec1.begin(); iter != vec1.end(); iter++)// ������ ������
//		cout << *iter << ' ';
//	cout << endl;
//	system("pause");
//	return 0;
//}