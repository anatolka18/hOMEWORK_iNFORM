#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int n;

vector<vector<int>> Cin(vector<vector<int>> a) {
	cout << "¬ведите матрицу : " << endl;
	int x;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> x;
			a[i][j] = x;
		}
	}
	cout << endl;
	return a;
}

void Cout(vector<vector<int>> a) {
	cout << "»тог : " << endl;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void mult(vector<vector<int>> a, vector<vector<int>> b) {
	vector<vector<int>> c;
	c.resize(n);
	for (int i = 0; i < n; i++) {
		c[i].resize(n);
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			for (int z = 0; z < n; z++) {
				c[i][j] += a[i][z] * b[z][j];
			}
		}
	}
	Cout(c);
}

int main() {
	setlocale(LC_ALL, "RUS");
	cout << "¬ведите размерность матриц n*n : " << endl;
	cin >> n;
	vector<vector<int>> a;
	vector<vector<int>> b;
	a.resize(n);
	b.resize(n);
	for (int i = 0; i < n;i++) {
		a[i].resize(n);
		b[i].resize(n);
	}
	a = Cin(a);
	b = Cin(b);
	mult(a, b);
	return 0;
}
