#include<iostream>
#include<string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int h = 0, b = 0;
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ':' && s[i + 1] == '-') {
			if (s[i + 2] == ')') h++;
			else if (s[i + 2] == '(') b++;
		}
	}
	if (h == 0 && b == 0) cout << "none\n";
	else if (h > b) cout << "happy\n";
	else if (b > h) cout << "sad\n";
	else cout << "unsure\n";
}