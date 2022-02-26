#include<iostream>
#include<cmath>
using namespace std;


bool isPrime(int n) {
	if (n < 2) return false;
	else if (n == 2) return true;
	else if (n % 2 == 0) return false;
	for (int i = 3; i<int(sqrt(n)) + 1; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

bool issex(int n) {
	if (isPrime(n) && (isPrime(n - 6) || (isPrime(n + 6)))) return true;
	return false;
}


int main() {
	int n;
	cin >> n;
	if (issex(n)) {
		cout << "Yes" << endl;
		//if it is sex Prime,print the min one
		if (isPrime(n - 6)) {
			cout << n - 6 << endl;
		}
		else {
			cout << n + 6 << endl;
		}
	}
	//it is not sex prime
	else {
		cout << "No" << endl;
		int i = n + 1;
		while (true) {
			if (issex(i)) {
				cout << i << endl;
				break;
			}
			i++;
		}
	}

	return 0;
}