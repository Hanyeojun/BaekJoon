#include<iostream>
#include<string>
using namespace std;
int main() {
	int n = 0, cnt = 0;
	string str;
	cin >> n;
	while (n--) {
		cin >> str;
		bool flag = true;
		for (int i = 0; i < str.length(); i++) {
			for (int j = 0; j < i; j++) {
				if (str[i] != str[i - 1] && str[i] == str[j]) {
					flag = false;
					break;
				}
			}
		}
		if (flag) {
			cnt++;
		}
	}
	cout << cnt;
}