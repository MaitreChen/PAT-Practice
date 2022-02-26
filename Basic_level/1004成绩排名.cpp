#include <iostream>
#include<string>

using namespace std;

typedef struct {
	string name;
	string id;
	int score;
}student;



int main() {
	student min, max, s;
	min.score = 100;
	max.score = -1;

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s.name >> s.id >> s.score;
		if (s.score < min.score) min = s;
		if (s.score > max.score) max = s;
	}
	cout << max.name<<" "<<max.id<<endl;
	cout << min.name<<" "<<min.id<<endl;

	return 0;
}

