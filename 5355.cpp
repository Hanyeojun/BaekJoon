#include<iostream>
#include<string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	double n;
	string s;
	cin >> t;
	while(t--) {
		cin >> n;
		getline(cin, s);
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '@') n *= 3.0;
			else if (s[i] == '%') n += 5;
			else if (s[i] == '#') n -= 7;
		}
		cout << fixed;
		cout.precision(2);
		cout << n << '\n';
	}
}