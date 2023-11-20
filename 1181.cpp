#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool Comp(string s1, string s2) {
	if (s1.length() < s2.length()) return true;
	else if (s1.length() == s2.length()) return s1 < s2; //길이가 같으면 사전순. <은 크기가 아닌 사전상 앞에 있는지 판단
	else return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	string* str = new string[n];
	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}
	sort(str, str + n, Comp);

	for (int i = 0; i < n; i++) {
		if (str[i] == str[i + 1]) {
			continue;
		}
		cout << str[i] << '\n';
	}
}