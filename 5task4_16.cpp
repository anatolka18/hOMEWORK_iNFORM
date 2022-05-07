////—оздать очередь, содержащую целые числа. ѕеред каждым максимальным эле ментом 
////очереди вставить минимальный элемент очереди.
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
//void F(queue*& q, queue*& t, int minn, int maxx) {
//	queue* q1 = NULL;
//	queue* t1 = NULL;
//	while (q) {
//		int x = pop(q, t);
//		if (x == maxx) {
//			push(q1, t1, minn);
//		}
//		push(q1, t1, x);
//	}
//	print(q1, t1);
//}
//
//
//int main() {
//	int n, k, maxx = 0, minn = 10000000000000;
//	setlocale(LC_ALL, "Russian");
//	cout << "¬ведите n : " << endl;
//	cin >> n;
//	queue* q = NULL;
//	queue* t = NULL;
//	cout << "¬ведите числа : " << endl;
//	for (int i = 0; i < n; i++) {
//		cin >> k;
//		if (k > maxx) {
//			maxx = k;
//		}
//		if (k < minn) {
//			minn = k;
//		}
//		push(q, t, k);
//	}
//	F(q, t, minn, maxx);
//	return 0;
//}
//
