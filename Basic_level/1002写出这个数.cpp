#include<iostream>
#include<vector>

using namespace std;

int main() {
	//int n; cin >> n; 超出整数表达的范围invalid
	char nums[1000];//定义字符型数组
	cin >> nums;
	string dg[] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };

	int i, s = 0;
	for (i = 0; nums[i] != '\0'; i++) s += nums[i] - '0';

	vector<int> res;
	while (s != 0) {
		int tmp = s % 10;
		res.push_back(tmp);
		s /= 10;
	}

	for (int i = res.size() - 1; i >= 0; i--) {
		if (i != 0) cout << dg[res[i]] << " ";
		else cout << dg[res[i]] << endl;
	}
	return 0;
}