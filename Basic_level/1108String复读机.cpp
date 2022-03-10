#include<iostream>
using namespace std;

/*这是一段嫉妒被嫌弃的代码，包括我自己！！*/
int main() {
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	string s; cin >> s;
	for (auto i : s) {
		if (i == 'S')a++;
		else if (i == 't')b++;
		else if (i == 'r')c++;
		else if (i == 'i')d++;
		else if (i == 'n')e++;
		else if (i == 'g')f++;
	}
	while (a || b || c || d || e || f) {
		if (a) {
			cout << "S";
			a--;
		}
		if (b) {
			cout << "t";
			b--;
		}
		if (c) {
			cout << "r";
			c--;
		}
		if (d) {
			cout << "i";
			d--;
		}
		if (e) {
			cout << "n";
			e--;
		}
		if (f) {
			cout << "g";
			f--;
		}
	}
	return 0;
}