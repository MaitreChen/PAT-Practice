#include<iostream>
using namespace std;

int a[110];

int main() {
	int n; cin >> n;
	int score, tmp;

	for (int i = 0; i < n; i++) {
		cin >> score;
		a[score]++;
	}

	int k; cin >> k;
	while (k--) {
		cin >> tmp;
		if (k)cout << a[tmp] << " ";
		else cout << a[tmp];
	}

	return 0;
}