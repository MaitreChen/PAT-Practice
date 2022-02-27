#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

static bool cmp(const pair<int, int>& arg1, const pair<int, int>& arg2) {
	return arg1.second > arg2.second;
}

int main() {
	int n;
	cin >> n;
	map<int, int> info;
	int i, a, b;
	for (i = 0; i < n; i++) {
		cin >> a >> b;
		if (info.find(a) == info.end()) info[a] = b;
		else info[a] += b;
	}
	vector<pair<int, int>> res(info.begin(), info.end());
	sort(res.begin(), res.end(), cmp);
	cout << res[0].first << " " << res[0].second << endl;

	return 0;
}