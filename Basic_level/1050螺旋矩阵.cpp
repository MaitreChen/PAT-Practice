#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> nums;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		nums.push_back(num);
	}

	//降序
	sort(nums.rbegin(), nums.rend());

	//获得列与行
	int j, k;
	for (j = (int)sqrt(n); j >= 1; j--) {
		k = n / j;
		int tmp = k - j;//最小
		if (j * k == n && tmp >= 0) break;
	}

	vector<vector<int>> m(k, vector<int>(j));//开辟空间
	int left = 0, right = j-1, top = 0, bottom = k-1;//3,4
	
	//模拟法填充元素
	int ans = 0;
	while (ans < n) {
		for (int p = left; p < right+1; p++) {
			m[top][p] = nums[ans];
			ans++;
		}
		top++;//1

		for (int q = top; q < bottom+1; q++) {
			m[q][right] = nums[ans];
			ans++;
		}
		right--; //2

		for (int s = right; s > left - 1; s--) {
			m[bottom][s] = nums[ans];
			ans++;
		}
		bottom--;//3

		for (int t = bottom; t > top-1; t--) {
			m[t][left] = nums[ans];
			ans++;
		}
		left++;
	}

	//输出
	for (int s = 0; s < k; s++) {
		for (int t = 0; t < j; t++) {
			if (t != j - 1) cout << m[s][t] << " ";
			else cout << m[s][t];
		}
		cout << endl;
	}

	return 0;
}