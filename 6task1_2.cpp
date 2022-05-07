<<<<<<< HEAD
////—оздать двусв€зный список, содержащий целые числа. ѕосле всех максимальных элементов вставить минимальный элемент.
////5 2 9 1 3 7 9 2 9  --  5 2 9 1 1 3 7 9 1 2 9 1
//#include<iostream>
//using namespace std;
//struct list {
//	int inf;
//	list* next;
//	list* prev;
//};
//void push(list*& h, list*& t, int x) {
//	list* r = new list;
//	r->inf = x;
//	r->next = NULL;
//	if (!h && !t) {
//		r->prev = NULL;
//		h = r;
//	}
//	else {
//		t->next = r;
//		r->prev = t;
//	}
//	t = r;
//}
//
//void output(list* h, list* t) {
//	list* p = h;
//	while (p) {
//		cout << p->inf << " ";
//		p = p->next;
//	}
//}
//
//void insert_after(list * &h, list * &t, list * r, int y) { 
//	list * p = new list; 
//	p-> inf = y;
//	if (r == t) { 
//		p-> next = NULL; 
//		p-> prev = r; 
//		r-> next = p;
//		t = p; 
//	}
//	else { 
//		r-> next-> prev = p; 
//		p-> next = r-> next; 
//		p-> prev = r; 
//		r-> next = p;
//	}
//}
//
//void del_list(list*& h, list*& t) {
//	while (h) {
//		list* p = h;
//		h = h->next;
//		h->prev = NULL;
//		delete p;
//	}
//}
//
//int main() {
//	setlocale(LC_ALL, "Russian");
//	int n, l, maxx = 0, minn = 10000000000;
//	list* h = NULL;
//	list* copyh = NULL;
//	list* t = NULL;
//	cout << "¬ведите n : " << endl;
//	cin >> n;
//	cout << "¬ведите числа : " << endl;
//	for (int i = 0; i < n; i++) {
//		cin >> l;
//		push(h, t, l);
//	}
//	copyh = h;
//	while (copyh) {//ищу мин и макс
//		int i = copyh->inf;
//		if (i >= maxx) {
//			maxx = i;
//		}
//		if (i <= minn) {
//			minn = i;
//		}
//		copyh = copyh->next;
//	}
//	copyh = h;
//	while (copyh) {// через доп указатель иду и вставл€ю
//		int i = copyh->inf;
//		if (i == maxx) {
//			insert_after(h, t, copyh, minn);
//			copyh = copyh->next;
//		}
//		copyh = copyh->next;
//	}
//	output(h, t);
//	delete copyh;
//	del_list(h, t);
//	return 0;
=======
////—оздать двусв€зный список, содержащий целые числа. ѕосле всех максимальных элементов вставить минимальный элемент.
////5 2 9 1 3 7 9 2 9  --  5 2 9 1 1 3 7 9 1 2 9 1
//#include<iostream>
//using namespace std;
//struct list {
//	int inf;
//	list* next;
//	list* prev;
//};
//void push(list*& h, list*& t, int x) {
//	list* r = new list;
//	r->inf = x;
//	r->next = NULL;
//	if (!h && !t) {
//		r->prev = NULL;
//		h = r;
//	}
//	else {
//		t->next = r;
//		r->prev = t;
//	}
//	t = r;
//}
//
//void output(list* h, list* t) {
//	list* p = h;
//	while (p) {
//		cout << p->inf << " ";
//		p = p->next;
//	}
//}
//
//void insert_after(list * &h, list * &t, list * r, int y) { 
//	list * p = new list; 
//	p-> inf = y;
//	if (r == t) { 
//		p-> next = NULL; 
//		p-> prev = r; 
//		r-> next = p;
//		t = p; 
//	}
//	else { 
//		r-> next-> prev = p; 
//		p-> next = r-> next; 
//		p-> prev = r; 
//		r-> next = p;
//	}
//}
//
//void del_list(list*& h, list*& t) {
//	while (h) {
//		list* p = h;
//		h = h->next;
//		h->prev = NULL;
//		delete p;
//	}
//}
//
//int main() {
//	setlocale(LC_ALL, "Russian");
//	int n, l, maxx = 0, minn = 10000000000;
//	list* h = NULL;
//	list* copyh = NULL;
//	list* t = NULL;
//	cout << "¬ведите n : " << endl;
//	cin >> n;
//	cout << "¬ведите числа : " << endl;
//	for (int i = 0; i < n; i++) {
//		cin >> l;
//		push(h, t, l);
//	}
//	copyh = h;
//	while (copyh) {//ищу мин и макс
//		int i = copyh->inf;
//		if (i >= maxx) {
//			maxx = i;
//		}
//		if (i <= minn) {
//			minn = i;
//		}
//		copyh = copyh->next;
//	}
//	copyh = h;
//	while (copyh) {// через доп указатель иду и вставл€ю
//		int i = copyh->inf;
//		if (i == maxx) {
//			insert_after(h, t, copyh, minn);
//			copyh = copyh->next;
//		}
//		copyh = copyh->next;
//	}
//	output(h, t);
//	delete copyh;
//	del_list(h, t);
//	return 0;
>>>>>>> origin/master
//}