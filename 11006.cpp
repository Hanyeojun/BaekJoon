#include<iostream>
using namespace std;
int main() {
	int tc, n, m, u, t;
	cin >> tc;
	while (tc--) {
		cin >> n >> m;
		u = m * 2 - n;
		t = m - (m * 2 - n);
		cout << u << ' ' <<t << '\n';
	}
}