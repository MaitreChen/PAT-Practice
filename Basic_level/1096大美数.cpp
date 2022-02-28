#include<iostream>
#include<vector>
#include<cmath>

using namespace std;


bool isBeauty(int n) {
	vector<int> arr;
	for (int i = 1; i <(int)sqrt(n)+1; i++) {
		//Attention 1：这里需要排除i和n/i相等的情况
		//比如9，i = 3，n/i = 3，存在重复。无法通过最后一个测试点
		if (n % i == 0 && i != n / i) { 
			arr.push_back(i);
			arr.push_back(n / i);
		}
	}

	//Attention 2: 如果不满4个正因数,直接返回false
	if (arr.size() < 4) return false;

	for (int j = 0; j < arr.size()-3; j++) {//注意不同的正因数，考虑范围 +1
		for (int k = j + 1; k < arr.size()-2; k++) {
			for (int l = k + 1; l < arr.size()-1; l++) {
				for (int m = l + 1; m < arr.size(); m++) {
					if ((arr[j] + arr[k] + arr[l] + arr[m]) % n == 0) {
						return true;
					}
				}
			}
		}
	}
	return false;
}


int main() {
	int n;cin >> n;
	int num;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (isBeauty(num)) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}