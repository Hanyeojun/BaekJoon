#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	cin >> str;
	int len = str.length()-1, cnt = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == str[len--]) cnt++;
	}
	if (cnt == str.length()) cout << 1;
	else cout << 0;
}