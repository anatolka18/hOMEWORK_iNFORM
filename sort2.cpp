//быстрой сортировкой и кучами
// матрица n на n : чет столбцы по убыванию, нечёт по возрастанию
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

ifstream in("input.txt", ios::in);// подключаем файл для чтения
ofstream out("output.txt", ios::out);// подключаем файл для запиcи

int* Quick_ch(int* arr, int left, int right) {
	int i, j, centr;
	i = left;
	j = right;
	centr = arr[(i + j) / 2];// выбирается опорный элемент
	while (i <= j) {
		while (arr[i] < centr) { 
			i++;
		}
		while (arr[j] > centr) {
			j--;
		}
		if (i <= j) {
			swap(arr[i], arr[j]);
			j--; i++;
		}
	}
	if (left < j) Quick_ch(arr, left, j);
	if (i < right) Quick_ch(arr, i, right);
	return arr;
}

int* Quick_nch(int* arr, int left, int right) {
	int i, j, centr;
	i = left;
	j = right;
	centr = arr[(i + j) / 2];// выбирается опорный элемент
	while (i <= j) {
		while (arr[i] > centr) {
			i++;
		}
		while (arr[j] < centr) {
			j--;
		}
		if (i <= j) {
			swap(arr[i], arr[j]);
			j--; i++;
		}
	}
	if (left < j) Quick_nch(arr, left, j);
	if (i < right) Quick_nch(arr, i, right);
	return arr;
}
int* heapify_ch(int* arr, int i, int n) {
	while (true) {
		int maxx = i;
		int l = 2 * i + 1;
		int r = 2 * i + 2;

		if (l < n && arr[l] > arr[maxx]) {
			maxx = l;
		}
		if (r < n && arr[r] > arr[maxx]) {
			maxx = r;
		}
		if (maxx == i) {
			break;
		}
		else {
			swap(arr[i], arr[maxx]);
			i = maxx;
		}
	}
	return arr;
}

int* Heap_ch(int* arr, int n) {
	for (int i = n / 2; i >= 0; i--) {
		arr = heapify_ch(arr, i, n);
	}
	for (int i = n - 1; i >= 1; i--) {
		swap(arr[0], arr[i]);
		arr = heapify_ch(arr, 0, i);
	}
	return arr;
}

int* heapify_nch(int* arr, int i, int n) {
	while (true) {
		int minn = i;
		int l = 2 * i + 1;
		int r = 2 * i + 2;

		if (l < n && arr[l] < arr[minn]) {
			minn = l;
		}
		if (r < n && arr[r] < arr[minn]) {
			minn = r;
		}
		if (minn == i) {
			break;
		}
		else {
			swap(arr[i], arr[minn]);
			i = minn;
		}
	}
	return arr;
}


int* Heap_nch(int* arr, int n) {
	for (int i = n / 2; i >= 0; i--) {
		arr = heapify_nch(arr, i, n);
	}
	for (int i = n - 1; i >= 1; i--) {
		swap(arr[0], arr[i]);
		arr = heapify_nch(arr, 0, i);
	}
	return arr;
}
int main() {
	setlocale(LC_ALL, "Russian");

	int n;
	in >> n;

	int** arr = new int* [n]; // создаем двумерный динамический массив
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}

	int a;
	for (int i = 0; i < n; i++) { // заполняем массив
		for (int j = 0; j < n; j++) {
			in >> a;
			arr[j][i] = a;
		}
	}

	cout << "Выберите сортировку : " << endl;
	cout << "1. Быстрая" << endl;
	cout << "2. Kуча" << endl;
	int k;
	cin >> k;
	switch (k) {
	case 1:
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0)
				arr[i] = Quick_ch(arr[i], 0, n - 1);
			else
				arr[i] = Quick_nch(arr[i], 0, n - 1);
		}
		out << "Quick : " << endl;
		break;
	case 2:
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0)
				arr[i] = Heap_ch(arr[i], n);
			else
				arr[i] = Heap_nch(arr[i], n);
		}
		out << "Heap : " << endl;
		break;
	}

	for (int i = 0; i < n; i++) { // выводим массив
		for (int j = 0; j < n; j++) {
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) { // удаляем массив
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}
//5
//1 3 9 0 4
//3 2 4 1 6
//3 4 1 1 3
//0 5 6 3 0
//1 4 6 2 4
