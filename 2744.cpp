#include<iostream>
#include<string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		else if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		cout << str[i];
	}
}