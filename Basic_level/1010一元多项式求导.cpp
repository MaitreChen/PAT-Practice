#include<iostream>
using namespace std;

int main() {
	int a, b;
	bool flag = true;//����falg���������ո�
	while (cin >> a >> b) {
		if (b == 0)continue;
		else {
			if (flag) {
				cout << a * b << " " << b - 1;
				flag = false;
			}
			//��ĩβ���Ϊ�м�������
			else cout << " " << a * b << " " << b - 1;
		}
	}
	if (flag) cout << "0 0";
}