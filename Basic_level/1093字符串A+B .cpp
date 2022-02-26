#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

//question :×Ö·û´®ÈçºÎÊäÈë£¿?
string fun(string str) {
	string s;
	for (int i = 0; i < str.size(); i++) {
		if (find(s.begin(), s.end(), str[i]) != s.end()) continue;
		else s += str[i];
	}
	return s;
}


int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	cout << fun(fun(s1) + fun(s2)) << endl;

	return 0;
}