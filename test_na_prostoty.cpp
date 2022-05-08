#include <iostream>
#include <cmath>
using namespace std;

int modexp(int a, int m, int n)
{
	if (m == 0) return 1;
	int z = modexp(a, m / 2, n);
	if (m % 2 == 0)
		return (z * z) % n;
	else
		return (a * z * z) % n;
}

int Miller_Rabin(int n,int r) {
	int m = n-1, k = 0;
	while (m > 0) {
		m /= 2;
		k++;
		if (m % 2 != 0) {
			break;
		}
	}
	cout << "���������� ����� n - 1 : 2^" << k << "*" << m << endl;
	while (r) {
		int a = (rand() % (n-2)) + 2;
		cout << "��������� ����� : " << a << endl;
		int x = modexp(a, m, n); // ���������� � ������� �� ������
		cout << "���������� � ������� �� ������ (a^m mod n) : " << x << endl;
		if (x == 1) {
			return 1;
		}
		if (x == n - 1) {
			for (int i = 0; i < k; i++) {
				x = modexp(a, m * (2 ^ i), n);
				cout << "���������� � ������� �� ������ (a^((2^i)*m) mod n) : " << x << endl;
				if (x == n-1) {
					return 1;
				}
			}
		}
		r--;
	}
	return 0;
}

int main() {
	setlocale(LC_ALL, "RUS");
	int n, r;
	cout << "������� ����� >3: " << endl;
	cin >> n;
	cout << "������� ���-�� �������: " << endl;
	cin >> r;
	if (Miller_Rabin(n,r)) {
		cout << "�������� �������" << endl;
	}
	else {
		cout << "���������" << endl;
	}
	return 0;
}
