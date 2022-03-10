#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	long long int p;//¿¼ÂÇµ½int¾«¶È
	cin >> n >> p;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	sort(nums.begin(), nums.end());
	int a, b;
	int val = 0;
	/*for (a = 0; a < nums.size(); a++) {
		for (b = nums.size() - 1; b >= a + 1; b--) {
			if (nums[b] <= nums[a] * p)break;
		}
		if (b - a + 1 >= val)val = b - a + 1;
	}*/
	for (a = 0; a < n; a++) {
		for (b = a+val; b < n; b++) {
			if (nums[b] <= nums[a] * p) {
				int tmp = b - a + 1;
				if (tmp > val)val = tmp;
			}
			else break;
		}	
	}

	cout << val << endl;

	return 0;
}