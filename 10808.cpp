#include<iostream>
#include<string>
using namespace std;
int main() {
	int tc = 0;
	cin >> tc;
	while (tc--) {
		string ch= {};
		int alp[27] = {};
		cin >> ch;

		for (int i = 0; i < ch.length(); i++) {
			if (isalpha(ch[i]) != 0) {
				for (int j = 0; j < 26; j++) {
					if (ch[i] == (j + 'a')) alp[j]++;
				}
			}
		}
		for (int i = 0; i < 26; i++) {
			if (alp[i] > 0) {
				cout << (char)(i + 'a') << ':' << alp[i] << '\n';
			}
		}
		cout << '\n';
	}
}