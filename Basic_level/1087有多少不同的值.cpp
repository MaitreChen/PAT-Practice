#include<iostream>
#include<set>
using namespace std;

int main() {
	int n; cin >> n;
	set<int> res;
	for (int i = 1; i < n + 1; i++) {
		int tmp = i / 2 + i / 3 + i / 5;
		res.insert(tmp);
	}
	cout << res.size() << endl;

	return 0;
}