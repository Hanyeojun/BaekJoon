#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin >> s;
	cout << s[0];
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == '-' && i + 1 < s.length()) cout << s[i + 1];
		else continue;
	}
}