#include<iostream>
#include<string>
using namespace std;

int main() {
	int n; cin >> n;
	string tmp;
	getchar();//冲走缓冲区中的回车符
	for (int i = 0; i < n; i++) {
		getline(cin, tmp);
		for (int j = 2; j < tmp.size(); j++) {
			if (tmp[j] == 'T')cout << tmp[j - 2] - 'A' + 1;
		}
	}
	return 0;
}