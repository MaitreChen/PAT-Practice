#include <string>
#include <iostream>
using namespace std;

int main()
{
	string s1;
	char c;
	getline(cin, s1);
	while ((c = getchar()) != '\n')
		//ֻ����û�г�����s1�е��ַ����ڴ�ͬʱ
		//��д��c������s1�У�s1���С�+����c���Ǵ�д
		if (find(s1.begin(), s1.end(), toupper(c)) == s1.end() && ((find(s1.begin(), s1.end(), '+') == s1.end()) || !isupper(c)))
			cout << c;
	return 0;
}