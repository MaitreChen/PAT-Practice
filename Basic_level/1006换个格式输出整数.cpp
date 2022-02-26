#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main()
{
	int n; cin >> n;//获取各位数字，循环输出值
	int a, b, c;
	string s = "123456789";
	a = n / 100;
	b = (n % 100) / 10;
	c = n % 10;

	for (int i = 0; i < a; i++)cout << "B";
	for (int i = 0; i < b; i++)cout << "S";

	string tmp = s.substr(0, c);
	cout << tmp << endl;
	
	return 0;
}