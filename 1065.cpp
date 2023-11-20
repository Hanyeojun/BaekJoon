#include<iostream>
using namespace std;
int Fnc(int n) {
	int cnt = 0, h, t, o;
	if (n < 100) return n;
	else {
		for (int i = 100; i <= n; i++) {
			h = i / 100;
			t = (i / 10) % 10;
			o = i % 10;
			if ((h - t) == (t - o)) cnt++;
		}
	}
	return cnt + 99;
}
int main() {
	int n;
	cin >> n;
	cout << Fnc(n);
}