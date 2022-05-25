// пузырёк, выбор, вставки
// номер группы, ФИО, год рождения, оценки
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

ifstream in("input.txt", ios::in);// подключаем файл для чтения
ofstream out("output.txt", ios::out);// подключаем файл для запиcи

struct Inf {// структура для cтудентов
	int group;
	string name;
	string surname;
	string patronymic;
	string data;
	int grades[5];
	int sum_grades = 0;
};

Inf CIN(Inf student) { // ввод данных о чловеке
	in >> student.group;
	in >> student.surname;
	in >> student.name;
	in >> student.patronymic;
	in >> student.data;
	for (int i = 0; i < 5; i++) {
		in >> student.grades[i];
		student.sum_grades+= student.grades[i];// считаем сумму оценок
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
Inf* Bubble(Inf* students, int n) { // меняем местами элементы и идём дальше
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			if (students[j - 1].sum_grades < students[j].sum_grades) { // < - по убыванию
				swap(students[j - 1], students[j]);
			}
		}
	}
	return students;
}

Inf* Сhoice(Inf* students, int n) {
	for (int i = 0; i < n; i++) {
		int maxx = 0;
		int j1 = 0;
		for (int j = i; j < n ; j++) {// ищем максимальный
			if (students[j].sum_grades > maxx) {
				maxx = students[j].sum_grades;
				j1 = j;
			}
		}
		swap(students[i], students[j1]);// меняем текущий на максимальный
	}
	return students;
}

Inf* Insert(Inf* students, int n) {
	//Идем вперед, пока не найдем неправильно стоящие ячейки,
	//запоминаем на какой ячейке мы остановились, меняем ячейки местами и идем назад, пока не поставим ячейку на место.
	//Начинаем с ячейки которую запомнили
	for (int i = 0; i < n; i++) {
		int j = i;
		while (j > 0 && students[j - 1].sum_grades < students[j].sum_grades) {// < - по убыванию
			swap(students[j - 1], students[j]);
			j--;
		}
	}
	return students;
}

int main() {
	setlocale(LC_ALL, "rus");
	int n; // кол-во учеников
	int k;
	in >> n;
	Inf* students = new Inf[n];
	for (int i = 0; i < n; i++) {
		students[i] = CIN(students[i]);
	}

	cout << "Выберите сортировку : " << endl;
	cout << "1. Пузырьком" << endl;
	cout << "2. Выбором" << endl;
	cout << "3. Вставками" << endl;
	cin >> k;
	switch (k) {
	case 1:
		Bubble(students, n);
		out << "Bubble : " << endl;
		break;
	case 2:
		Сhoice(students, n);
		out << "Сhoice : " << endl;
		break;
	case 3:
		Insert(students, n);
		out << "Сhoice : " << endl;
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