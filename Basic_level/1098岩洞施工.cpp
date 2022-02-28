#include<iostream>
using namespace std;


int main() {
	int n;
	cin >> n;
	int low = 1005, high = 0;

	int num, tmp;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num < low) low = num;
	}
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num > high)high = num;
	}

	//attention £º low-high¸ÄÎªlow > high
	if (low - high) cout << "Yes" << " "<< low - high;
	else cout << "No" << " " << low - high + 1;
	
	return 0;
}