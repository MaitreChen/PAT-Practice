#include<iostream>
using namespace std;

int a[1010];

int main() {
	a[0] = 2;
	a[1] = 0;
	a[2] = 1;
	a[3] = 9;

	int n; cin >> n;
	for (int i = 4; i < n; i++) {
		a[i] = (a[i - 1] + a[i - 2] + a[i - 3] + a[i - 4]) % 10;
	}
	for (int i = 0; i < n; i++)cout << a[i];
	return 0;
}