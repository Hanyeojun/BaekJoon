#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
	while (1) {
		int a[3] = {};
		cin >> a[0] >> a[1] >> a[2];
		if (a[0] == 0 && a[1] == 0 && a[2] == 0) break;
		sort(a, a + 3);
		if (pow(a[2], 2) == pow(a[0], 2) + pow(a[1], 2)) {
			cout << "right" << '\n';
		}
		else cout << "wrong" << '\n';
	}
}