//Создать стек, содержащий целые числа. В новый стек сначала вывести чет­ные, потом нечетные числа.
#include<iostream>
using namespace std;

struct stack {
	int inf;
	stack* next;
};

void push(stack *&h, int x) { // добавление элемента
	stack * r = new stack; 
	r -> inf = x; 
	r -> next = h; 
	h = r; 
}

int pop(stack * &h) { // удаление элемента
	int i = h -> inf; 
	stack * r = h; 
	h = h -> next; 
	delete r; 
	return i; 
}

void reverse(stack * &h) {  // разворот стека
	stack * h1 = NULL; 
	while (h) 
		push(h1, pop(h)); 
	h = h1; 
}


stack* F(stack*& steck) {
	stack* ChSteck = NULL;
	stack* NChSteck = NULL;
	while (steck) {
		int x = pop(steck);
		if (x % 2 == 0) {
			push(ChSteck, x);
		}
		else {
			push(NChSteck, x);
		}
	}
	reverse(ChSteck);
	reverse(NChSteck);
	while (ChSteck || NChSteck) {
		int x;
		if (NChSteck) {
			x = pop(NChSteck);
		}
		else {
			x = pop(ChSteck);
		}
		push(steck, x);
	}
	return steck;
}


int main() {
	int n, k;
	setlocale(LC_ALL, "Russian");
	cout << "Введите n : " << endl;
	cin >> n;
	stack* steck = NULL;
	cout << "Введите числа : " << endl;
	for (int i = 0; i < n; i++) {
		cin >> k;
		push(steck, k);
	}
	stack* res = F(steck);
	while (res) {
		cout << pop(res) << " ";
	}
	return 0;
}