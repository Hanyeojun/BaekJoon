#include<iostream>
using namespace std;
int main() {
	int p, a = 0, b = 0;
	string str;
	cin >> p >> str;
	for (int i = 0; i < p; i++) {
		if (str[i] == 'A') a++;
		else if (str[i] == 'B') b++;
	}
	if (a > b) cout << 'A';
	else if (b > a)cout << 'B';
	else cout << "Tie";
}