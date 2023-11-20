#include<iostream>
using namespace std;
int gcd(int a, int b) { //the greatest common denominator
	int n = a % b;
	while (n != 0) {
		a = b;
		b = n;
		n = a % b;
	}
	return b;
}
int lcm(int a, int b) { //the least[lowest] common multiple
	return (a * b) / gcd(a, b);
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int x = 0, y = 0;
	cin >> x >> y;
	cout << gcd(x, y) << '\n' << lcm(x,y);
}