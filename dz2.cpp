<<<<<<< HEAD
﻿////Дано математическое выражение. Вывести его в префиксной форме
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//struct stack {
//	char inf;
//	stack* next;
//};
//
//void push(stack*& h, char x) { // добавление элемента
//	stack* r = new stack;
//	r->inf = x;
//	r->next = h;
//	h = r;
//}
//
//char pop(stack*& h) { // удаление элемента
//	char i = h->inf;
//	stack* r = h;
//	h = h->next;
//	delete r;
//	return i;
//}
//
//int prior(char ch) {
//	if (ch == ')') {
//		return 1;
//	}
//	if (ch == '+' || ch == '-') {
//		return 2;
//	}
//	if (ch == '*' || ch == '/') {
//		return 3;
//	}
//}
//void F(string str) {
//	stack* znak = NULL;
//	string rez = "";
//	for (int i = str.length()-1; i>-1 ; i--) {// запускаю цикл с конца
//		if (isdigit(str[i])) {// запись цифр
//			rez += str[i];
//		}
//		else {
//			if (prior(str[i]) == 1) {// запись закрывающей скобки
//				push(znak, str[i]);
//			}
//			else {
//				if (str[i] == '(') {// проверка на открывающуюся
//					char k = pop(znak);
//					while (k != ')') {
//						rez += k;
//						k = pop(znak);
//					}
//				}
//				else {
//					if (znak == NULL && (prior(str[i]) == 2 || prior(str[i]) == 3)) {// сравнение приорететов знаков
//						push(znak, str[i]);//если стек пустой добавляем
//					}
//					else {
//						if (prior(str[i]) == 2 || prior(str[i]) == 3) {// иначе сравниваем приоритеты занков
//							char kPr = pop(znak);
//							if (prior(str[i]) > prior(kPr)) {// если тот который зашёл сильнее, то просто его дбавляем
//								push(znak, kPr);
//								push(znak, str[i]);
//							}
//							else {
//								while (prior(str[i]) < prior(kPr) && znak != NULL) {// иначе выносим все знаки сильнее его 
//									rez += kPr;
//									kPr = pop(znak);
//								}
//								if (znak == NULL) {// для того чтобы не потерять последний знак
//									rez += kPr;
//									push(znak, str[i]);
//								}
//								else {
//									push(znak, kPr);
//									push(znak, str[i]);
//								}
//
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	if (znak != NULL) {// проверка стека на пустоту
//		char o = pop(znak);// если остался один то помогаем ему выбраться, чтоыб не потерялся(т.к стек уже пустой)
//		if (znak == NULL) {
//			rez += o;
//		}
//		else {// иначе помогаем последнему, что бы не потерялся
//			while (znak != NULL) {
//				rez += o;
//				char o = pop(znak);
//				if (znak == NULL) {
//					rez += o;
//				}
//			}
//		}
//	}
//	for (int i = rez.length() - 1; i > -1; i--) {// выводим в перевёрнутом виде
//		cout << rez[i];
//	}
//	cout << endl;
//}
//int main() {
//	string str;
//	cin >> str;
//    F(str);
//	return 0;
//}
////5+(3+(2+4*(3-1)+2)/4+1)*4
=======
﻿////Дано математическое выражение. Вывести его в префиксной форме
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//struct stack {
//	char inf;
//	stack* next;
//};
//
//void push(stack*& h, char x) { // добавление элемента
//	stack* r = new stack;
//	r->inf = x;
//	r->next = h;
//	h = r;
//}
//
//char pop(stack*& h) { // удаление элемента
//	char i = h->inf;
//	stack* r = h;
//	h = h->next;
//	delete r;
//	return i;
//}
//
//int prior(char ch) {
//	if (ch == ')') {
//		return 1;
//	}
//	if (ch == '+' || ch == '-') {
//		return 2;
//	}
//	if (ch == '*' || ch == '/') {
//		return 3;
//	}
//}
//void F(string str) {
//	stack* znak = NULL;
//	string rez = "";
//	for (int i = str.length()-1; i>-1 ; i--) {// запускаю цикл с конца
//		if (isdigit(str[i])) {// запись цифр
//			rez += str[i];
//		}
//		else {
//			if (prior(str[i]) == 1) {// запись закрывающей скобки
//				push(znak, str[i]);
//			}
//			else {
//				if (str[i] == '(') {// проверка на открывающуюся
//					char k = pop(znak);
//					while (k != ')') {
//						rez += k;
//						k = pop(znak);
//					}
//				}
//				else {
//					if (znak == NULL && (prior(str[i]) == 2 || prior(str[i]) == 3)) {// сравнение приорететов знаков
//						push(znak, str[i]);//если стек пустой добавляем
//					}
//					else {
//						if (prior(str[i]) == 2 || prior(str[i]) == 3) {// иначе сравниваем приоритеты занков
//							char kPr = pop(znak);
//							if (prior(str[i]) > prior(kPr)) {// если тот который зашёл сильнее, то просто его дбавляем
//								push(znak, kPr);
//								push(znak, str[i]);
//							}
//							else {
//								while (prior(str[i]) < prior(kPr) && znak != NULL) {// иначе выносим все знаки сильнее его 
//									rez += kPr;
//									kPr = pop(znak);
//								}
//								if (znak == NULL) {// для того чтобы не потерять последний знак
//									rez += kPr;
//									push(znak, str[i]);
//								}
//								else {
//									push(znak, kPr);
//									push(znak, str[i]);
//								}
//
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	if (znak != NULL) {// проверка стека на пустоту
//		char o = pop(znak);// если остался один то помогаем ему выбраться, чтоыб не потерялся(т.к стек уже пустой)
//		if (znak == NULL) {
//			rez += o;
//		}
//		else {// иначе помогаем последнему, что бы не потерялся
//			while (znak != NULL) {
//				rez += o;
//				char o = pop(znak);
//				if (znak == NULL) {
//					rez += o;
//				}
//			}
//		}
//	}
//	for (int i = rez.length() - 1; i > -1; i--) {// выводим в перевёрнутом виде
//		cout << rez[i];
//	}
//	cout << endl;
//}
//int main() {
//	string str;
//	cin >> str;
//    F(str);
//	return 0;
//}
////5+(3+(2+4*(3-1)+2)/4+1)*4
>>>>>>> origin/master
////(4+3)*5-(2*6)