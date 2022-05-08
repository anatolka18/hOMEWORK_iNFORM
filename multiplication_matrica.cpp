#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int n;

vector<vector<int>> Cin(vector<vector<int>> a) {
	cout << "Введите матрицу : " << endl;
	int x;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cin >> x;
			a[i][j] = x;
		}
	}
	cout << endl;
	return a;
}

void Cout(vector<vector<int>> a) {
	cout << "Итог : " << endl;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void mult(vector<vector<int>> a, vector<vector<int>> b) {
	vector<vector<int>> c;
	c.resize(n+1);
	for (int i = 1; i <= n; i++) {
		c[i].resize(n+1);
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			for (int z = 1; z <= n; z++) {
				c[i][j] += a[i][z] * b[z][j];
			}
		}
	}
	Cout(c);
}

void Vinigrad_mult(vector<vector<int>> a, vector<vector<int>> b) {
	vector<vector<int>> c;
	c.resize(n);
	for (int i = 1; i <= n; i++) {
		c[i].resize(n+1);
	}
	int k = n / 2;
	vector<int> F1;
	for (int i = 1; i <= n; i++) {
		F1[i] = a[i][1] * a[i][2];
		for (int j = 2; j <= k; j++) {
			F1[i] += a[i][2 * j - 1] * a[i][2 * j];
		}
	}
	vector<int> F2;
	for (int i = 1; i <= n; i++) {
		F2[i] = b[1][i] * b[2][i];
		for (int j = 2; j <= k; j++) {
			F1[i] += b[2 * j - 1][i] * b[2 * j][i];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			c[i][j] = -F1[i] - F2[j];
			for (int z = 1; z <= k; z++) {
				c[i][j] += (a[i][2 * z - 1] + b[2 * z][j]) * (a[i][2 * z] + b[2 * z - 1][j]);
			}
		}
	}
	if (n % 2 != 0) {// если n нечёт то добавляю к элементам матрицы с нехватающие
	        for (int i = 1; i <= n; i++) {
		         for (int j = 1; j <= n; j++) {
				c[i][j] += a[i][n] * b[n][j];
			}
		}
        }
	Cout(c);
}

int main() {
	setlocale(LC_ALL, "RUS");
	cout << "Введите размерность матриц n*n : " << endl;
	cin >> n;
	vector<vector<int>> a;
	vector<vector<int>> b;
	a.resize(n+1);
	b.resize(n+1);
	for (int i = 1; i <= n;i++) {
		a[i].resize(n+1);
		b[i].resize(n+1);
	}
	a = Cin(a);
	b = Cin(b);
	mult(a, b);
	Vinigrad_mult(a, b);
	return 0;
}
