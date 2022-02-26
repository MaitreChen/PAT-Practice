#include<iostream>
#include<vector>
using namespace std;


bool isPrime(int n) {
	if (n < 2)return false;
	if (n == 2)return true;
	if (n % 2 == 0) return false;
	for (int i = 3; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	vector<int> a;
	int m, n;
	cin >> m >> n;
	int i = 0, count = 0;
	while (true) {
		if (isPrime(i)) {
			count++;
		}
		else {
			i++;
			continue;
		}
		if ((count >= m) && (count <= n)) {
			//cout << i << endl;
			a.push_back(i);
		}
		if (count > n) break;
		i++;
	}
	for (int j = 0; j < a.size(); j++) {
		if ((j + 1) % 10 == 0) cout << a[j] << endl;
		else {
			if (j == a.size() - 1) cout << a[j] << "";
			else cout << a[j] << " ";
		}
	}
	return 0;
}