#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	while (1) {
		string str, cpy;
		cin >> str;
		if (str == "0") break;
		cpy = str;
		reverse(str.begin(), str.end());
		if (str == cpy) cout << "yes\n";
		else cout << "no\n";
	}
}