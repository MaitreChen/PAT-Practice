#include<iostream>
using namespace std;

int main() {
	int a[100], aws[100];
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)cin >> a[i]; //��÷���
	for (int i = 0; i < m; i++)cin >> aws[i]; //��ô� 
	for (int i = 0; i < n; i++) {
		int info[100]; //�洢ѧ����
		int s = 0; 
		for (int j = 0; j < m; j++) {
			cin >> info[j];
			if (info[j] == aws[j]) s += a[j]; //�������ȷ�����ۼ����
		}
		cout << s << endl;
	}
	return 0;
}