#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main() {
	int n; cin >> n;
	char a; cin >> a;
	
	for (int i = 0; i < n; i++) cout << a;
	cout << endl;

	for (int i = 1; i < (n - 2)/2; i++) {
		cout << a;
		for (int i = 0; i < n - 2; i++)cout << " ";
		cout << a << endl;
	}
	for (int i = 0; i < n; i++)cout << a;
	return 0;
}