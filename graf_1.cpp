////¬ывести Ёйлеров путь или Ёйлеров цикл, если он существует.
////–еализовать топологическую сортировку
//
//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//ifstream in("inputALL.txt");
//
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
//void Eiler(vector<vector<int>> Gr, int N) {
//	vector<int> rank;
//	rank.resize(N);
//	for (int i = 0; i < N; i++) {
//		rank[i] = Gr[i].size();
//	}
//
//	int v1 = -1;
//	int v2 = -1;
//
//	for (int i = 0; i < N; i++) {
//		if (rank[i] % 2 != 0) {
//			if (v1 == -1) {
//				v1 = i;
//			}
//			else {
//				if (v2 == -1) {
//					v2 = i;
//				}
//				else {
//					break;
//				}
//			}
//		}
//	}
//
//	if (v1 != -1) {
//		Gr[v1].push_back(v2);
//		sort(Gr[v1].begin(), Gr[v1].end());
//		rank[v1]++;
//		Gr[v2].push_back(v1);
//		sort(Gr[v2].begin(), Gr[v2].end());
//		rank[v2]++;
//	}
//
//	vector<int> res;
//	stack* h = NULL;
//	pushS(h, v1);
//	while(h){
//		int k = h->inf;
//		if (rank[k] != 0) {
//			for (int i = 0; i < Gr[k].size(); i++) {
//				if (Gr[k][i]!=-1) {
//					int smeg = Gr[k][i];
//					pushS(h, smeg);
//					rank[k]--;
//					rank[smeg]--;
//					Gr[k][i] = -1;                             // удал€ю ребра
//					for (int j = 0; j < Gr[smeg].size(); j++) {//
//						if (Gr[smeg][j] == k) {                //
//							Gr[smeg][j] = -1;                  //
//							break;                             //
//						}                                      //
//					}                                          //
//					break;
//				}
//			}
//		}
//		else {
//			res.push_back(popS(h));
//		}
//	}
//
//	vector<int> final;
//	if (v1 != -1) {
//		for (int i = 0; i + 1 < res.size(); i++) {
//			if (res[i] == v1 && res[i + 1] == v2) {
//				for (int j = i + 1; j < res.size(); j++) {
//					final.push_back(res[j]);
//				}
//				for (int j = 1; j <= i; j++) {
//					final.push_back(res[j]);
//				}
//			}
//		}
//	}
//
//	int k = 0;
//	for (int i = 0; i < N; i++) {
//		if (rank[i] != 0) {
//			k = 1;
//			break;
//		}
//	}
//	if (k == 1) {
//		cout << "Ќет Ёйлерова цикла" << endl;
//	}
//	else {
//		for (auto it = final.begin(); it != final.end(); it++) {
//			cout << *it << " ";
//		}
//		cout << endl;
//	}
//}
//
//vector<int> order;
//vector<int> visit;
//
//void dfs(vector<vector<int>> Gr, int N, int x) {
//	visit[x] = 1;
//	for (int i = 0; i < Gr[x].size(); i++) {
//		if (visit[Gr[x][i]] == 0) {
//			dfs(Gr, N, Gr[x][i]);
//		}
//	}
//	order.push_back(x);
//}
//
//void topolog(vector<vector<int>> Gr, int N, int x) {
//	visit.resize(N);
//	for (int i = 0; i < N; i++) {
//		visit[i] = 0;
//	}
//
//	dfs(Gr, N, x);
//
//	for (int i = 0; i < N; i++) {
//		if (!visit[i]) {
//			dfs(Gr, N, i);
//		}
//	}
//
//	for (auto it = order.end() - 1; it != order.begin(); it--) {
//		cout << *it << " ";
//	}
//	cout << endl;
//
//}
//
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
//		if (E != 0) {
//			for (int j = 0; j < E; j++) {
//				in >> r;
//				Reb[i].push_back(r);
//			}
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < Reb[i].size(); j++) {
//			cout << Reb[i][j] << " ";
//		}
//		cout << endl;
//	}
//	int vyb;
//	cout << "1.¬ывести Ёйлеров путь или Ёйлеров цикл, если он существует. " << endl;
//	cout << "2.–еализовать топологическую сортировку. " << endl;
//	cin >> vyb;
//	switch (vyb) {
//	case 1: {Eiler(Reb, N); 
//		break;
//	}
//	case 2: {
//		cout << "— какой вершины? : " << endl;
//		cin >> vyb;
//		topolog(Reb, N, vyb);
//		break;
//	}
//	}
//	return 0;
//}
//// є1
////6
////4
////1 2 4 5
////3
////0 3 4
////3
////0 3 4
////4
////1 2 4 5
////4
////0 1 2 3
////2
////0 3
////є2
////9
////2
////1 2
////3
////2 3 4
////2
////4 5
////1
////6
////1
////6
////2
////4 7
////2
////7 8
////1
////8
////0