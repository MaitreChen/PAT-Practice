#include <string>
#include <iostream>
using namespace std;

int main()
{
	string s1;
	char c;
	getline(cin, s1);
	while ((c = getchar()) != '\n')
		//只考虑没有出现在s1中的字符，于此同时
		//大写的c出现在s1中，s1中有‘+’且c不是大写
		if (find(s1.begin(), s1.end(), toupper(c)) == s1.end() && ((find(s1.begin(), s1.end(), '+') == s1.end()) || !isupper(c)))
			cout << c;
	return 0;
}