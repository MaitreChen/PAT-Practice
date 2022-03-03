#include<iostream>
using namespace std;
const int MAX = 1000; //MAX过小产生段错误，扩大max即可
int res[MAX][MAX];

int main() {
	int m, n, a, b, t, tmp;
	cin >> m >> n >> a >> b >> t;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> tmp;
			if (tmp >= a && tmp <= b)tmp = t;
			res[i][j] = tmp;
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%03d", res[i][j]);
			if (j != n - 1) cout << " ";
			else cout << "";
		}
		cout << endl;
	}
	return 0;
}