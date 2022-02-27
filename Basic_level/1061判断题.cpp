#include<iostream>
using namespace std;

int main() {
	int a[100], aws[100];
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)cin >> a[i]; //获得分数
	for (int i = 0; i < m; i++)cin >> aws[i]; //获得答案 
	for (int i = 0; i < n; i++) {
		int info[100]; //存储学生答案
		int s = 0; 
		for (int j = 0; j < m; j++) {
			cin >> info[j];
			if (info[j] == aws[j]) s += a[j]; //如果答案正确，则累加输出
		}
		cout << s << endl;
	}
	return 0;
}