#include<iostream>
#include<string>
using namespace std;
int main() {
	int tc = 0;
	cin >> tc;
	while (tc--) {
		int r = 0;
		string s;
		cin >> r >> s;
		for (int i = 0; i < s.length(); i++) {
			for (int j = 0; j < r; j++) {
				cout << s[i];
			}
		}
		cout << endl;
	}
}