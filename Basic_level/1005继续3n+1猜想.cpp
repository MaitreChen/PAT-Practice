#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<vector>
using namespace std;


int main() {
	int n;
	cin >> n;
	int a[1000];
	for (int i = 0; i < n; i++)cin >> a[i];
	//for (int i = 0; i < n; i++) cout << a[i] << " ";
	vector<int> nums;//��������м�����������100
	vector<int> res;//��ŷ�������������
	for (int i = 0; i < n;i++) {
		int tmp = a[i];
		while (tmp != 1) {
			if (tmp % 2 == 0) tmp = tmp / 2;
			else tmp = tmp*3 + 1;
			if (find(nums.begin(), nums.end(), tmp) == nums.end()) 
			nums.push_back(tmp);
		}
	}
	//for (int i = 0; i < nums.size(); i++) {
	//	cout << nums[i] << " ";
	//}
	//cout << endl;
	//ɸѡ
	for (int i = 0; i < n; i++) {
		if (find(nums.begin(), nums.end(), a[i]) == nums.end())res.push_back(a[i]);
	}
	//�������
	sort(res.rbegin(), res.rend());
	for (int i = 0; i < res.size(); i++) {
		if (i != res.size() - 1)cout << res[i] << " ";
		else cout << res[i] << endl;
	}
	return 0;
}