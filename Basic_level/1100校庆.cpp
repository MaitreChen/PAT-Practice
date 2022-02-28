#include<iostream>
#include<algorithm>
#include<string>
#include<map>
using namespace std;


int main() {
	int n;
	cin >> n;

	string s;
	string s1 = "99999999";
	string s2 = "99999999";
	string s3 = "99999999";
	string val1 = ""; //记录来宾中最年长校友
	string val2 = ""; //记录最年长来宾
	string val3 = ""; //记录最年长校友

	//存储校友身份info
	map<string, bool> mp;
	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		mp[tmp] = true;
		string tmp_date = tmp.substr(6, 8);
		if (tmp_date < s3) {
			s3 = tmp_date;
			val3 = tmp;
		}
	}

	int c;
	cin >> c;
	bool flag = false;
	int ans = 0;
	for (int i = 0; i < c; i++) {
		cin >> s; //获得来宾信息
		if (mp[s]) {//如果来宾是校友，ans++，并输出最年长的；
			ans++;
			flag = true;
			string birth_data1 = s.substr(6, 8);
			if (birth_data1 < s1) {
				s1 = birth_data1;
				val1 = s;
			}
		}
		else {//来宾中没有校友，输出来宾中最年长的；
			string birth_data2 = s.substr(6, 8);
			if (birth_data2 < s2) {
				s2 = birth_data2;
				val2 = s;
			}
		}
	}
	cout << ans << endl;
	if (flag) {
		if (val1 > val3) cout << val1 << endl;
		else cout << val3 << endl;
	}
	else cout << val2 << endl;
	return 0;
}