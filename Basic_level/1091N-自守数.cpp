#include<iostream>
#include<cmath>
using namespace std;

int fun(int n) {
	int ans = 0;
	while (n != 0) {
		n /= 10;
		ans++;
	}
	return pow(10, ans);
}


int main() {
	int tmp, n;
	cin >> tmp;
	for (int i = 0; i < tmp; i++) {
		cin >> n;
		bool flag = false;
		for (int j = 1; j < 11; j++) {
			int lt = j * n * n % fun(n);

			if (lt == n) {
				cout << j << " " << j * n * n << endl;
				flag = true;
				break;
			}
		}
		if (!flag) cout << "No" << endl;
	}
	return 0;
}