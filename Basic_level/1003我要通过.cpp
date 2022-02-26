#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;


int main() {
	int n; cin >> n;
	string s;

	for (int i = 0; i < n; i++) {
		cin >> s;
		int cnt_p = count(s.begin(), s.end(), 'P');
		int cnt_t = count(s.begin(), s.end(), 'T');
		int cnt_a = count(s.begin(), s.end(), 'A');
		
		auto res_p = find(s.begin(), s.end(), 'P');
		int idx_p = distance(s.begin(), res_p);
		auto res_t = find(s.begin(), s.end(), 'T');
		int idx_t = distance(s.begin(), res_t);
		//cout << idx_p << " " << idx_t;

		//����P/A/T�����ַ����ҽ������������ַ�
		//P��T֮ǰ�ҽ�����1�Σ�A����
		if ((cnt_p + cnt_t + cnt_a) != s.size())cout << "NO" << endl;
		else if (cnt_p == 0 || cnt_t == 0 || cnt_a == 0) cout << "NO" << endl;
		else if (idx_p > idx_t) cout << "NO" << endl;
		else if (cnt_p != 1 || cnt_t != 1) cout << "NO" << endl;
		else {
			//formula:  c = b*a (what is matter)
				//��ȡ������ͬλ�õ�A������
			if (idx_p + 1 == idx_t) cout << "NO" << endl;
			else {

				int bf = s.substr(0, idx_p).size();
				int md = s.substr(idx_p + 1, idx_t - idx_p - 1).size();
				int lt = s.substr(idx_t + 1, s.size() - idx_t - 1).size();
				//if (bf == 0 && lt == 0 || md != 0) {}
				if (lt != bf * md) cout << "NO" << endl;
				else cout << "YES" << endl;
			}
		}
	}
	return 0;
}