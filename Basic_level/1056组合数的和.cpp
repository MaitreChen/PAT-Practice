#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, num;
    cin >> n;

    vector<int> nums;
    while (cin >> num) {
        nums.push_back(num);
    }
    int s = 0;
    for (int i : nums) {
        for (int j : nums) {
            if (i != j) {
                s += 10 * i + j;
            }
        }
    }
    cout << s << endl;
    return 0;
}