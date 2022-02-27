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


//�Զ���ȽϺ���
static bool cmp1(const Student& s1, const Student& s2) {
	if (s1.score == s2.score) return s1.id < s2.id;//�ɼ���ͬ��������ֵ���������
	else return s1.score > s2.score; //��֮�ɼ����������
}

/*
static bool cmp2(const pair<string, int>& arg1, const pair<string, int>& arg2) {
	if (arg1.second == arg2.second)return arg1.first < arg1.first;//���������򰴿�����ŵ���˳�����
	else return arg1.second > arg2.second;
}
*/



//����1�ӿ�
void one(char c,vector<Student> arr) {
	int i, j, ans = 0;
	vector<Student> res;
	for (i = 0; i < arr.size(); i++) {
		if (arr[i].id[0] == c) {
			res.push_back(arr[i]);
			ans++;
		}
	}
	//�������
	if (ans) {
		sort(res.begin(), res.end(), cmp1);

		for (j = 0; j < res.size(); j++) {
			cout << res[j].id << " " << res[j].score << endl;
		}
	}
	else cout << "NA" << endl;
}


//����2�ӿ�
void two(string room,vector<Student> arr) {
	int i, ans = 0, s = 0;//�����������ܷ�
	for (i = 0; i < arr.size(); i++) {
		if (room == arr[i].id.substr(1, 3)) {
			ans++;
			s += arr[i].score;
		}
	}
	if (ans) cout << ans << " " << s << endl;
	else cout << "NA" << endl;
}

//����3�ӿ�
void three(string data, vector<Student> arr) {
	int ans = 0;
	map<string, int> hash;//������Ӧ������������hash
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
	
	/*��hash���󿽱���vector��, �������
	���ǵ�unordered_map����������ģ���������sortʵ������
	���Կ�ʼ���ý������ݷ�����vector�У�Ȼ����дcmpʵ������
	����Ȼ������������ģ����Կ���ֱ�Ӳ���������������map
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
	vector<Student> arr;//�洢ѧ��������Ϣ��ɼ�
	for (i = 0; i < n; i++) {
		cin >> infos.id >> infos.score;
		arr.push_back(infos);
	}
	//���ݲ�ָͬ��ͳ��

	string ist1;//ָ��
	string ist2;
	for (j = 0; j < m; j++) {
		cin >> ist1 >> ist2;
		/*************����ΪAPI�ӿ�**************/

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