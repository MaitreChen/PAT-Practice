#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<map>
using namespace std;


struct Student {
	string id;
	int score;
};


//自定义比较函数
static bool cmp1(const Student& s1, const Student& s2) {
	if (s1.score == s2.score) return s1.id < s2.id;//成绩相同，按编号字典序递增输出
	else return s1.score > s2.score; //反之成绩优者先输出
}

/*
static bool cmp2(const pair<string, int>& arg1, const pair<string, int>& arg2) {
	if (arg1.second == arg2.second)return arg1.first < arg1.first;//人数并列则按考场编号递增顺序输出
	else return arg1.second > arg2.second;
}
*/



//类型1接口
void one(char c,vector<Student> arr) {
	int i, j, ans = 0;
	vector<Student> res;
	for (i = 0; i < arr.size(); i++) {
		if (arr[i].id[0] == c) {
			res.push_back(arr[i]);
			ans++;
		}
	}
	//排序并输出
	if (ans) {
		sort(res.begin(), res.end(), cmp1);

		for (j = 0; j < res.size(); j++) {
			cout << res[j].id << " " << res[j].score << endl;
		}
	}
	else cout << "NA" << endl;
}


//类型2接口
void two(string room,vector<Student> arr) {
	int i, ans = 0, s = 0;//考生人数与总分
	for (i = 0; i < arr.size(); i++) {
		if (room == arr[i].id.substr(1, 3)) {
			ans++;
			s += arr[i].score;
		}
	}
	if (ans) cout << ans << " " << s << endl;
	else cout << "NA" << endl;
}

//类型3接口
void three(string data, vector<Student> arr) {
	int ans = 0;
	map<string, int> hash;//建立对应考场号与人数hash
	for (auto i : arr) {
		if (data == i.id.substr(4, 6)) {
			hash[i.id.substr(1,3)]++;
			ans++;
		}
	}
	if (ans) {
		auto iter = hash.rbegin();
		for (; iter != hash.rend(); iter++) {
			cout << iter->first << " " << iter->second << endl;
			/*cout << hash[j].first << " " << hash[j].second << endl;*/
		}
	}
	else cout << "NA" << endl;
	
	/*将hash对象拷贝至vector中, 排序并输出
	考虑到unordered_map容器是无序的，难以利用sort实现排序；
	所以开始采用将该数据分配至vector中，然后手写cmp实现排序。
	但既然该容器是无序的，所以可以直接采用有序容器，即map
	*/
	/*if (ans) {
		vector<pair<string, int>> res;
		for (auto j : hash) {
			res.push_back(j);
		}
		sort(res.begin(), res.end(), cmp2);
		for (int j = 0; j < res.size(); j++) {
			cout << res[j].first << " " << res[j].second << endl;
		}
	}
	else
		cout << "NA" << endl;*/
}




int main() {
	int n, m;
	cin >> n >> m;
	
	int i, j;
	Student infos;
	vector<Student> arr;//存储学生基本信息与成绩
	for (i = 0; i < n; i++) {
		cin >> infos.id >> infos.score;
		arr.push_back(infos);
	}
	//根据不同指令统计

	string ist1;//指令
	string ist2;
	for (j = 0; j < m; j++) {
		cin >> ist1 >> ist2;
		/*************以下为API接口**************/

		if (ist1 == "1") {
			cout << "Case" << " " << j + 1 << ":" <<" "<< ist1 << " " << ist2 << endl;
			one(ist2[0], arr);
		}
		else if (ist1 == "2") {
			cout << "Case" << " " << j + 1 << ":" <<" "<< ist1 << " " << ist2 << endl;
			two(ist2,arr);
		}
		else {
			cout << "Case" << " " << j + 1 << ":" <<" "<< ist1 << " " << ist2 << endl;
			three(ist2, arr);
		}

	}

	return 0;
}