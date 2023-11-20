#include<iostream>
#include<string>
using namespace std;
int main() {
	ios_base::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);
	int n, cnt = 0, num = 666;
	string str;
	cin >> n;
	while (1) {
		str = to_string(num);
		if (str.find("666") != -1) cnt++;
		if (n == cnt) break;
		num++;
	}
	cout << num;
}