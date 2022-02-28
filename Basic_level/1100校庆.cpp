#include<iostream>
#include<algorithm>
#include<string>
#include<map>
using namespace std;

int main() {

	int n; cin >> n;
	string info;
	map<string, string> mymap, hpy, host; //存储校友的<身份信息，出生日期>
	for (int i = 0; i < n; i++) {
		cin >> info;
		mymap[info] = info.substr(6, 8);
	}
	int c; cin >> c;
	for (int i = 0; i < c; i++) {
		cin >> info;
		//如果来宾中有校友的话，将信息存放在hpy中
		//与此同时，将所有来宾信息都存放在host中
		//Attention:map会根据key排序，而非value
		if (mymap[info] != "")hpy[info.substr(6, 8)] = info;
		host[info.substr(6, 8)] = info;
	}
	//如果hpy为空，也就是来宾中没有一个校友，那么直接输出host中最年长的；
	//反之，输出hpy中最年长的
	if (hpy.size()) {
		cout << hpy.size() << endl;
		cout << hpy.begin()->second << endl;
	}
	else cout << host.begin()->second << endl;
	return 0;
}