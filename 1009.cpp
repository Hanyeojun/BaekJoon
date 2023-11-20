#include<iostream>
using namespace std;
int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

	int t = 0, a = 0, b = 0, tmp = 1;
	cin >> t;
	while(t--) {
		cin >> a >> b;
		for (int i = 0; i < b; i++) {
			tmp = (tmp * a) % 10;
		}
		if (tmp == 0) {
			cout << "10" << '\n';
		}
		else {
			cout << tmp << '\n';
		}
		tmp = 1;
	}
}