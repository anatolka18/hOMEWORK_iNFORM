////������� ����, ���������� �����. ������� �� ����� ��� ������������ ��������
//#include<iostream>
//using namespace std;
//
//struct stack {
//	int inf;
//	stack* next;
//};
//
//void push(stack*& h, int x) { // ���������� ��������
//	stack* r = new stack;
//	r->inf = x;
//	r->next = h;
//	h = r;
//}
//
//int pop(stack*& h) { // �������� ��������
//	int i = h->inf;
//	stack* r = h;
//	h = h->next;
//	delete r;
//	return i;
//}
//
//void reverse(stack*& h) {  // �������� �����
//	stack* h1 = NULL;
//	while (h)
//		push(h1, pop(h));
//	h = h1;
//}
//
//stack* F(stack*& steck) {
//	stack* s1 = NULL;
//	int maxx = 0;
//	while (steck) {
//		int x = pop(steck);
//		if (x > maxx) {
//			maxx = x;
//		}
//		push(s1, x);
//	}
//	reverse(s1);
//	while (s1) {
//		int x = pop(s1);
//		if (x!= maxx) {
//			push(steck, x);
//		}
//	}
//	return steck;
//}
//
//
//int main() {
//	int n, k;
//	setlocale(LC_ALL, "Russian");
//	cout << "������� n : " << endl;
//	cin >> n;
//	stack* steck = NULL;
//	cout << "������� ����� : " << endl;
//	for (int i = 0; i < n; i++) {
//		cin >> k;
//		push(steck, k);
//	}
//	stack* res = F(steck);
//	while (res) {
//		cout << pop(res) << " ";
//	}
//	return 0;
//}