////Ãðàô ïðåäñòàâëåí â âèäå ñïèñêà ñìåæíîñòè.Ðåàëèçîâàòü îáõîä â øèðèíó, èñïîëüçóÿ î÷åðåäü, è íåðåêóðñèâíûé îáõîä â ãëóáèíó.
//#include <iostream>
//#include <fstream>
//#include <vector>
//using namespace std;
//
//ifstream in("input.txt");
//
//struct queue {
//	int inf;
//	queue * next;
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
//struct stack {
//	int inf;
//	stack* next;
//};
//
//void pushS(stack *&h, int x) { 
//	stack * r = new stack; 
//	r -> inf = x; 
//	r -> next = h; 
//	h = r; 
//}
//
//int popS(stack * &h) { 
//	int i = h -> inf; 
//	stack * r = h; 
//	h = h -> next; 
//	delete r; 
//	return i; 
//}
//
//void reverseS(stack * &h) { 
//	stack * h1 = NULL; 
//	while (h) 
//		pushS(h1, popS(h)); 
//	h = h1; 
//}
//
//
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
//void helperG(int k, vector<vector<int>> Gr, vector<int> visit, vector<int> conect) {
//	stack* Predok = NULL;
//	pushS(Predok, -1);
//	vector<int> out;
//	out.push_back(k);
//	int p = k;
//	while (conect[k] > 0) {
////		for (int i = 0; i < Gr[p].size(); i++) {
////			int j = Gr[p][i];
////			if ((j!= Predok->inf) || (j!= k)) {
////				if (visit[j] == 0) {
////					out.push_back(j);
////					if (conect[j] > 0) {
////						pushS(Predok, p);
////						conect[j] --;
////						conect[p] --;
////						p = j;
////					}
////				}
////			}
////		}
////		visit[p] = 1;
////		p = popS(Predok);
////		if (out.size() == Gr.size()) {
////			break;
////		}
////	}
////	for (auto i = out.begin(); i != out.end(); i++) {
////		cout << *i << " ";
////	}
////	cout << endl;
////
////}
//int main() {
//	setlocale(LC_ALL, "Russian");
//	int E, N;
//	in >> N;
//	vector<vector<int>> Reb;
//	vector<int> Conect;
//	Reb.resize(N);
//	int r;
//	for (int i = 0; i < N; i++) {
//		in >> E;
//		Conect.push_back(E);
//		for (int j = 0; j < E; j++){
//			in >> r;
//			Reb[i].push_back(r);
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		for (auto j = 0; j < Conect[i]; j++) {
//			cout << Reb[i][j] << " ";
//		}
//		cout << endl;
//	}
//	Shir6(N, Reb);
//	Glubina(N, Reb);
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
////6
////4 5
