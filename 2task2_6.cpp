////Дан текст, состоящий из предложений, разделенных знаками препинания из
////набора «. ? !».Предложения в свою очередь состоят из слов, отделенных друг от
////друга пробелами.Найти слова(без учета регистра) и их количество, которые
////встречаются только в повествовательных предложениях.
//
//#include<iostream>
//#include<set>
//#include<string>
//#include<vector>
//#include<numeric>
//#include<algorithm>
//
//using namespace std;
//bool F(string a) {
//	return (a == "");
//}
//// I want to eat. Is there anything to eat? I am going to the store!
//int main() {
//	setlocale(LC_ALL, "Russian");
//	string str, temp;
//	char tmp;
//	getline(cin, str);
//	set<string> setV, setP;
//	string razd = "!?.";
//	int pos = 0, k = str.find_first_of(razd, pos), pos1, k1;
//	while (k != string::npos) {
//		tmp = str[k];
//		temp = str.substr(pos, k - pos);
//		temp += " ";
//		pos1 = 0;
//		k1 = temp.find_first_of(" ", pos1);
//		while (k1 != string::npos) {
//			string word = temp.substr(pos1, k1 - pos1);
//			/*	if (isupper(word)) {
//					tolower(word);
//				}*/
//			switch (tmp) {
//			case '.': setP.insert(word); break;
//			case '!': setV.insert(word); break;
//			case '?': setV.insert(word); break;
//			}
//			pos1 = k1 + 1;
//			k1 = temp.find_first_of(" ", pos1);
//		}
//		if (ispunct(str[k])) { //если нашелся знак табуляции
//			pos = k + 2;
//		}
//		else {
//			pos = k + 1;
//		}
//		k = str.find_first_of(razd, pos);
//
//	}
//	vector<string> vec(setP.size());
//
//	set_difference(setP.begin(), setP.end(), setV.begin(), setV.end(), vec.begin());
//
//	for (vector<string>::iterator iter = vec.begin(); iter != vec.end(); iter++)// вывожу вектор
//		cout << *iter << ' ';
//	cout << endl;
//
//	auto iter = remove_if(vec.begin(), vec.end(), F);
//	vec.erase(iter, vec.end());
//    cout<< vec.size() << endl;
//	return 0;
//}