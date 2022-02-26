#include<iostream>
#include<vector>
using namespace std;

bool isBBnum(int n) {
	vector<int> arr;
	for (int i = 1; i < (n / 2 + 1); i++) {
		if (n % i == 0) arr.push_back(i);
	}

	//如果不满4个正因数
	if (arr.size() < 4) return false;

	for (int j = 0; j < arr.size(); j++) {//注意不同的正因数，考虑范围 +1
		for (int k = j + 1; k < arr.size(); k++) {
			for (int l = k + 1; l < arr.size(); l++) {
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
	// 	vector<int> nums;
	// 	int n, num;
	// 	cin >> n;
	// 	for (int i = 0; i < n; i++) {
	// 		cin >> num;
	// 		nums.push_back(num);
	// 	}
	int n;
	cin >> n;
	int nums[1000];
	for (int i = 0; i < n; i++) cin >> nums[i];
	cout << nums[0];
	/*for (int i = 0; i < n; i++) {
		if (isBBnum(nums(i))) cout << "Yes" << endl;
		else cout << "No" << endl;
	}*/

	return 0;
}