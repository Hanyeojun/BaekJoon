#include<iostream>
#include<string>
using namespace std;
int main() {
	int n[10] = {0}, m =0;
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		for (int j = 0; j < 10; j++) {
			if ((s[i] - '0') == j) n[j]++;
		}
	}
	n[6] = (n[6] + n[9]) / 2 + (n[6] + n[9]) % 2;
	for (int i = 0; i < 9; i++) if (n[i] > m) m = n[i];
	cout << m;
}