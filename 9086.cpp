#include<iostream>
#include<string>
using namespace std;
int main() {
	int tc;
	string s;
	cin >> tc;
	while (tc--) {
		cin >> s;
		cout << s[0] << s[s.length() - 1] << '\n';
	}
}