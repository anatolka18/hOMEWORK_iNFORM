// ������, �����, �������
// ����� ������, ���, ��� ��������, ������
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

ifstream in("input.txt", ios::in);// ���������� ���� ��� ������
ofstream out("output.txt", ios::out);// ���������� ���� ��� ����c�

struct Inf {// ��������� ��� c��������
	int group;
	string name;
	string surname;
	string patronymic;
	string data;
	int grades[5];
	int sum_grades = 0;
};

Inf CIN(Inf student) { // ���� ������ � �������
	in >> student.group;
	in >> student.surname;
	in >> student.name;
	in >> student.patronymic;
	in >> student.data;
	for (int i = 0; i < 5; i++) {
		in >> student.grades[i];
		student.sum_grades+= student.grades[i];// ������� ����� ������
	}
	return student;
}
void COUT(Inf student) {
	out << student.group << " " << student.surname << " " << student.name << " " << student.patronymic << " " << student.data << " ";
	for (int i = 0; i < 5; i++) {
		out << student.grades[i] << " ";
	}
	out << endl;
}
Inf* Bubble(Inf* students, int n) { // ������ ������� �������� � ��� ������
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			if (students[j - 1].sum_grades < students[j].sum_grades) { // < - �� ��������
				swap(students[j - 1], students[j]);
			}
		}
	}
	return students;
}

Inf* �hoice(Inf* students, int n) {
	for (int i = 0; i < n; i++) {
		int maxx = 0;
		int j1 = 0;
		for (int j = i; j < n ; j++) {// ���� ������������
			if (students[j].sum_grades > maxx) {
				maxx = students[j].sum_grades;
				j1 = j;
			}
		}
		swap(students[i], students[j1]);// ������ ������� �� ������������
	}
	return students;
}

Inf* Insert(Inf* students, int n) {
	//���� ������, ���� �� ������ ����������� ������� ������,
	//���������� �� ����� ������ �� ������������, ������ ������ ������� � ���� �����, ���� �� �������� ������ �� �����.
	//�������� � ������ ������� ���������
	for (int i = 0; i < n; i++) {
		int j = i;
		while (j > 0 && students[j - 1].sum_grades < students[j].sum_grades) {// < - �� ��������
			swap(students[j - 1], students[j]);
			j--;
		}
	}
	return students;
}

int main() {
	setlocale(LC_ALL, "rus");
	int n; // ���-�� ��������
	int k;
	in >> n;
	Inf* students = new Inf[n];
	for (int i = 0; i < n; i++) {
		students[i] = CIN(students[i]);
	}

	cout << "�������� ���������� : " << endl;
	cout << "1. ���������" << endl;
	cout << "2. �������" << endl;
	cout << "3. ���������" << endl;
	cin >> k;
	switch (k) {
	case 1:
		Bubble(students, n);
		out << "Bubble : " << endl;
		break;
	case 2:
		�hoice(students, n);
		out << "�hoice : " << endl;
		break;
	case 3:
		Insert(students, n);
		out << "�hoice : " << endl;
		break;
	}

	for (int i = 0; i < n; i++) {
		COUT(students[i]);
	}
	delete[]students;
	return 0;
}
//4
//111 Dudkin Ivan Olegovich 19.02.2000 3 3 4 5 1
//114 Puckush Jonh Paulovich 13.11.1999 4 5 5 2 4
//121 Kushlicka Lubov Kechina 08.04.1998 5 5 3 5 5
//131 Lushin Kesha Ilin 10.01.2001 5 5 5 5 5 