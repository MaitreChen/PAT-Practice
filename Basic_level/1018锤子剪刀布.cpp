#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int a1 = 0, a2 = 0, a3 = 0, b1 = 0, b2 = 0, b3 = 0;//��Ϊȫ�ֱ�������¼�ס������˳�ȭ���


//�Զ���ȽϺ���������ⲻΨһ�����������ĸ����С�Ľ�
static bool mycmp(const pair<char, int> arg1, const pair<char, int> arg2) {
	if (arg1.second == arg2.second) return arg1.first < arg2.first;
	else return arg1.second > arg2.second;
}

//����ȽϺ�����0,1,2�ֱ������䡢ʤ��ƽ
int cmp(char c1, char c2) {
	if (c1 == 'C' && c2 == 'J') {
		a1++;//C
		return 1;
	}
	else if (c1 == 'C' && c2 == 'B') {
		b1++;//B
		return 0;
	}
	else if (c1 == 'J' && c2 == 'C') {
		b2++;//C
		return 0;
	}
	else if (c1 == 'J' && c2 == 'B') {
		a2++;//J
		return 1;
	}
	else if (c1 == 'B' && c2 == 'J') {
		b3++;//J
		return 0;
	}
	else if (c1 == 'B' && c2 == 'C') {
		a3++;//B
		return 1;
	}
	else return 2;
}

//��¼���ʤ�������
char cmp_3(int a, int b, int c) {
	map<char, int> mymap;
	mymap['C'] = a;
	mymap['J'] = b;
	mymap['B'] = c;
	vector<pair<char, int>> res;
	for (auto iter:mymap) {
		res.push_back(iter);
	}
	sort(res.begin(), res.end(), mycmp);
	return res[0].first;
	
	//�������ֶ��жϣ�����Ϊ�˷�ֹ����Ƿ�ѣ���ֱ�Ӳ���map
	/*if (a > b && a > c)return 'C';
	else if (b > a && b > c)return 'J';
	else if (c > a && c > b)return 'B';
	else if (a == b && a > c)return 'C';
	else if (a == b && a < c)return 'B';
	else if (c == b && c > a)return 'B';
	else if (c == b && c < a)return 'C';
	else if (a == c && a > b)return 'B';
	else if (a == c && a < b)return 'J';
	else if (a == b == c)return 'B';*/
}


int main() {
	int n; cin >> n;
	char c1, c2;
	int j1 = 0, j2 = 0, j3 = 0; //��ʾ�׵�ʤƽ�����
	for (int i = 0; i < n; i++) {
		cin >> c1 >> c2;
		int res = cmp(c1, c2);
		if (res == 1) j1++;
		else if (res == 0) j3++;
		else j2++;
	}
	cout << j1 << " " << j2 << " " << j3 << endl;
	cout << j3 << " " << j2 << " " << j1 << endl;
	cout << cmp_3(a1, a2, a3) << " " << cmp_3(b2, b3, b1) << endl;
	return 0;
}