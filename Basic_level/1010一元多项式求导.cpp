#include<iostream>
using namespace std;

int main() {
	int a, b;
	bool flag = true;//利用falg控制输出间空隔
	while (cin >> a >> b) {
		if (b == 0)continue;
		else {
			if (flag) {
				cout << a * b << " " << b - 1;
				flag = false;
			}
			//改末尾输出为中间输出间隔
			else cout << " " << a * b << " " << b - 1;
		}
	}
	if (flag) cout << "0 0";
}