#include<iostream>
#include<algorithm>
#include<string>
#include<map>
using namespace std;

int main() {

	int n; cin >> n;
	string info;
	map<string, string> mymap, hpy, host; //�洢У�ѵ�<�����Ϣ����������>
	for (int i = 0; i < n; i++) {
		cin >> info;
		mymap[info] = info.substr(6, 8);
	}
	int c; cin >> c;
	for (int i = 0; i < c; i++) {
		cin >> info;
		//�����������У�ѵĻ�������Ϣ�����hpy��
		//���ͬʱ��������������Ϣ�������host��
		//Attention:map�����key���򣬶���value
		if (mymap[info] != "")hpy[info.substr(6, 8)] = info;
		host[info.substr(6, 8)] = info;
	}
	//���hpyΪ�գ�Ҳ����������û��һ��У�ѣ���ôֱ�����host�����곤�ģ�
	//��֮�����hpy�����곤��
	if (hpy.size()) {
		cout << hpy.size() << endl;
		cout << hpy.begin()->second << endl;
	}
	else cout << host.begin()->second << endl;
	return 0;
}