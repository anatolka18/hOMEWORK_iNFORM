////Создать очередь, содержащую числа. В новой очереди сначала вывести отрицательные, потом положительные числа.
//#include<iostream>
//using namespace std;
//struct queue {
//	int inf;
//	queue * next;
//};
//
//void push(queue*& h, queue*& t, int x) {
//	queue* r = new queue;
//	r->inf = x;
//	r->next = NULL;
//	if (!h && !t) {
//		h = t = r;
//	}
//	else {
//		t->next = r;
//		t = r;
//	}
//}
//
//int pop(queue*& h,queue*& t) {
//	queue* r = h;
//	int i = h -> inf;
//	h = h -> next;
//	if (!h)
//		t = NULL;
//	delete r;
//	return i;
//}
//
//void print(queue*& q, queue*& t) {
//	while (q) {
//		cout << pop(q, t) << " ";
//	}
//}
//
//void F(queue*& q, queue*& t) {
//	queue* minusB = NULL;
//	queue* minusE = NULL;
//	queue* plusB = NULL;
//	queue* plusE = NULL;
//	while (q) {
//		int x = pop(q, t);
//		if (x < 0) {
//			push(minusB, minusE, x);
//		}
//		else {
//			push(plusB, plusE, x);
//		}
//	}
//	while (minusB || plusB) {
//		int x;
//		if (minusB) {
//			x = pop(minusB, minusE);
//		}
//		else {
//			x = pop(plusB, plusE);
//		}
//		push(q, t, x);
//	}
//	print(q, t);
//}
//
//
//int main() {
//	int n, k;
//	setlocale(LC_ALL, "Russian");
//	cout << "Введите n : " << endl;
//	cin >> n;
//	queue* q = NULL;
//	queue* t = NULL;
//	cout << "Введите числа : " << endl;
//	for (int i = 0; i < n; i++) {
//		cin >> k;
//		push(q, t, k);
//	}
//	F(q, t);
//	return 0;
//}
//
