#include<iostream>
#include<string>
using namespace std;


typedef struct{
	string name;
	string birth;
}people;


int main()
{
	int n, i, ans = 0;
	cin >> n;
	people infos, min, max;
	min.birth = "2014/09/06";
	max.birth = "1814/06/06";
	for (i = 0; i < n; i++) {
		cin >> infos.name >> infos.birth;
		if (infos.birth > "2014/09/06" || infos.birth < "1814/09/06")continue;
		if (infos.birth >= max.birth) max = infos;
		if (infos.birth <= min.birth) min = infos;
		ans++;
	}
	cout << ans << " " << min.name << " " << max.name << endl;
	
	return 0;
}