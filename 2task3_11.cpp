////Во входном файле задан набор слов и целых чисел, разделенных пробелами.
////Найти все слова, встречающиеся столько же раз, сколько первое число.
//#include<iostream>
//#include<fstream>
//#include<string>
//#include<map>
//#include<numeric>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	ifstream in("input.txt");
//	string str, number="1234567890",firsnnum;
//	getline(in, str);
//	str += " ";
//	map<string, int> let, num;
//	int pos = 0, k = str.find_first_of(" ", pos), chislo = 0;
//	while (k != string::npos) {
//		string word = str.substr(pos, k - pos);
//		if (word.find_first_not_of(number) == string::npos)
//		{
//			if (num.empty()) {
//				firsnnum = word;
//			}
//			num[word]++;
//		}
//		else {
//			let[word]++;
//		}
//		pos = k + 1;
//		k = str.find_first_of(" ", pos);
//	}
//	int kn = num[firsnnum];
//	for (map<string, int>::iterator iter = let.begin(); iter != let.end(); iter++)
//		if (iter->second == kn) cout << iter->first << ' ';
//	cout << endl;
//
//	return 0;
//
//}