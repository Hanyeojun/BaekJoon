#include<iostream>
#include<string>
#include<map>//map
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	map<string, int>mp;
	int n, m, cnt = 0;
	string str, s;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> str;
		mp.insert({ str,1 }); //insert date
	}
	for (int i = 0; i < m; i++) {
		cin >> s;
		if (mp.find(s) != mp.end()) { //if find s, plus cnt
			cnt++;
		}
	}
	cout << cnt;
}