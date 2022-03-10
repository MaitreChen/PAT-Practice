//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//
//int main() {
//    int a, b, n;
//    cin >> a >> b >> n;
//    int tmp, s = a + b;
//    vector<int> res;
//    while (s) {
//        tmp = s % n;
//        res.push_back(tmp);
//        s /= n;
//    }
//    for (int i = res.size()-1; i >= 0; i--)cout << res[i];
//    return 0;
//}


#include<iostream>
#include<string>
using namespace std;


int main() {
    int a, b, n;
    cin >> a >> b >> n;

    if (a + b == 0) cout << 0;
    else {
        string  res = "";
        int s = a + b;

        while (s) {
            res = to_string(s % n) + res; //考虑到需要逆向输出，则直接字符串相加即可
            s /= n;
        }
        cout << res;
    }
    return 0;
}