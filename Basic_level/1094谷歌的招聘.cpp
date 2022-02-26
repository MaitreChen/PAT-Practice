#include<iostream>
#include<string>
#include<cmath>
using namespace std;


int my_pow(int base, int power) {
	int s = 1;
	while (power--) {
		s *= base;
	}
	return s;
}


bool isPrime(int n) {
	if (n < 2) return false;
	else if (n == 2)return true;
	else if (n % 2 == 0) return false;
	for (int i = 3; i < (int)sqrt(n) + 1; i++) {
		if (n % i == 0)return false;
	}
	return true;
}

int convertStrToInt(string str) {
	if (str == "0") return 0;
	int i, s = 0;
	for (i = 0; i < str.size(); i++) {
		s += (str[i] - '0') * my_pow(10, str.size() - i - 1);
	}
	return s;
}



int main()
{
	int l, k;
	cin >> l >> k;
	string nums;
	cin >> nums;

	bool flag = false;
	int i;
	for (i = 0; i<l-k+1; i++) {
		if (isPrime(convertStrToInt(nums.substr(i, k)))) {
			flag = true;
			break;
		}
	}
	if (flag)cout << nums.substr(i, k);
	else cout << "404";

	return 0;
}