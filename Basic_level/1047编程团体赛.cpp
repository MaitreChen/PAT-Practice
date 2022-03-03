#include<iostream>
#include<map>
using namespace std;


int main() {
	int n; cin >> n;
	map<int, int> mymap;
	int num, tmp, score;
	for (int i = 0; i < n; i++) {
		scanf_s("%d-%d %d",& num, &tmp, &score);
		mymap[num] += score;
	}

	int val = 0, id = 0;
	for (auto iter : mymap) {
		if (iter.second >= val) {
			val = iter.second;
			id = iter.first;
		}
	}
	cout << id << " " << val;
	
	return 0;
}