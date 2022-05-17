////Дан неориентированный граф.Вставить в граф ребро, соединяющее вершины A и B.
//#include <iostream>
//#include <fstream>
//#include <vector>
//using namespace std;
//ifstream in("input.txt");
//
//
//struct queue {
//	int inf;
//	queue* next;
//};
//
//void pushQ(queue*& h, queue*& t, int x) {
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
//int popQ(queue*& h, queue*& t) {
//	queue* r = h;
//	int i = h->inf;
//	h = h->next;
//	if (!h)
//		t = NULL;
//	delete r;
//	return i;
//}
//
//void helperS(queue* h,queue*t,int k, vector<vector<int>> Gr, vector<int> visit) {
//	pushQ(h, t, k);
//	visit[k] = 1;
//	cout << k << " ";
//	while (h) {
//		int y = popQ(h, t);
//		for (int i = 0; i < Gr[y].size(); i++) {
//			int j = Gr[y][i];
//			if (visit[j] == 0) {
//				cout << j << " ";
//				visit[j] = 1;
//				pushQ(h, t, j);
//			}
//		}
//
//	}
//}
//void Shir6(int N, vector<vector<int>> Gr) {
//	queue* h = NULL;
//	queue* t = NULL;
//	int k;
//	cout << "Начать обход с : " << endl;
//	cin >> k;
//	vector<int> visit;
//	visit.resize(N);
//	for (int i = 0; i < N; i++) {
//			visit.push_back(0);
//	}
//	helperS(h, t, k, Gr, visit);
//	cout << endl;
//}
//
//int main() {
//	setlocale(LC_ALL, "Russian");
//	int E, N;
//	in >> N;
//	vector<vector<int>> Reb;
//	Reb.resize(N);
//	int r;
//	for (int i = 0; i < N; i++) {
//		in >> E;
//		for (int j = 0; j < E; j++) {
//			in >> r;
//			Reb[i].push_back(r);
//		}
//	}
//	int A, B;
//	cout << "Введите номер вершин A и B: " << endl;
//	cin >> A;
//	cin >> B;
//	Reb[A].push_back(B);
//	Reb[B].push_back(A);
//
//	Shir6(N, Reb);
//	return 0;
//}
////7
////4
////1 2 4 5
////2
////0 3
////2
////0 5
////1
////1
////2
////0 6
////2
////2 6
////2
////4 5