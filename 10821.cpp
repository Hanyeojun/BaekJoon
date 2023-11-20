#include<iostream>
#include<string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int cnt = 1;
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ',') cnt++;
	}
	cout << cnt << '\n';
}