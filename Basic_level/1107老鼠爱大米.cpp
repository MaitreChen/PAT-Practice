#include<iostream>
using namespace std;

int res[105];

int main() {
	int i, j, tmp, n, m;
	cin >> n >> m;
	int fnl = 0;
	for (i = 0; i < n; i++) {
		int max = 0;
		for (j = 0; j < m; j++) {
			cin >> tmp;
			if (tmp >= max)max = tmp;
		}
		res[i] = max;
		if (max >= fnl)fnl = max;
	}

	for (int i = 0; i < n; i++) {
		if (i != n - 1) cout << res[i] << " ";
		else cout << res[i] << endl;
	}
	cout << fnl << endl;
	return 0;
}