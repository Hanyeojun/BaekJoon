#include<iostream>
#include<string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tc;
	cin >> tc;
	while (tc--) {
		int a, b, cnt = 0;
		string str;
		cin >> a >> b;
		for (int i = a; i <= b; i++) {
			str = to_string(i);
			for (int j = 0; j < str.length(); j++) {
				if (str[j] == '0') {
					cnt++;
				}
			}
		}
		cout << cnt << '\n';
	}
}