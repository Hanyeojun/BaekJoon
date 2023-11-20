#include<iostream>
using namespace std;
int gcd(int a, int b) {
	int tmp = a % b;
	while (tmp != 0) {
		a = b;
		b = tmp;
		tmp = a % b;
	}
	return b;
}
int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}
int main() {
	int tc = 0;
	cin >> tc;
	while(tc--) {
		int x, y;
		cin >> x >> y;
		cout << lcm(x, y) << '\n';
	}
}