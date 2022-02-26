#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n, k, x;
	cin >> n >> k >> x;
	int num, count = 0, s;
	vector<vector<int>> arr(n, vector<int>(n, 0));
	vector<int> res;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> num;
			arr[i][j] = num;
		}
	}

	//移位
	for (int i = 0; i < n; i++) {
		if ((i + 1) % 2 != 0) {
			count++;
			if (count % 2 != 0) {
				arr[i].pop_back();
				arr[i].insert(arr[i].begin(), x);
			}
			else {
				arr[i].pop_back();
				arr[i].pop_back();
				arr[i].insert(arr[i].begin(), x);
				arr[i].insert(arr[i].begin(), x);
			}
		}
	}

	//按列求和
	for (int i = 0; i < n; i++) {
		s = 0;
		for (int j = 0; j < n; j++) {
			s += arr[j][i];
		}
		if (i == n - 1) cout << s << endl;
		else cout << s << " ";

	}

	return 0;
}