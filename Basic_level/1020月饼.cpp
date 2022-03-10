#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;




struct Cake {
	float num; //数量
	float price;  //总价
	float rate; //单价
};

static bool compare(const Cake& c1, const Cake& c2) {
	return c1.rate > c2.rate;
}


int main() {
	int n, need;
	cin >> n >> need;

	vector<Cake> tmp(n);
	for (int i = 0; i < n; i++) {
		cin >> tmp[i].num;
	}
	for (int i = 0; i < n; i++) {
		cin >> tmp[i].price;
	}
	for (int i = 0; i < n; i++) {
		tmp[i].rate = tmp[i].price / tmp[i].num;
	}

	sort(tmp.begin(), tmp.end(), compare);


	float res = 0;
	for (int i = 0; i < n; i++) {
		if(need>=tmp[i].num){
			res += tmp[i].price;
		}
		else {
			res += tmp[i].rate * need;
			break;
		}
		need -= tmp[i].num;
	}
	printf("%.2f", res);
	
	return 0;
}



