#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int c1 = 0, c2 = 0;

	int a[4];
	while (n--) {
		for (int i = 0; i < 4; i++) cin >> a[i];
		//cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3];

		if (a[0] + a[2] == a[1] && a[0] + a[2] != a[3])c2++;
		if (a[0] + a[2] != a[1] && a[0] + a[2] == a[3]) c1++;
	}
	cout << c1 << " " << c2 << endl;
	return 0;
}