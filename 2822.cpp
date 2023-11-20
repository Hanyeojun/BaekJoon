#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int q[8] = {}, copy[8] = {}, sum = 0;
	for (int i = 0; i < 8; i++) {
		cin >> q[i];
		copy[i] = q[i];
	}
	sort(copy, copy + 8);
	for (int i = 3; i < 8; i++) {
		sum += copy[i];
	}
	cout << sum << '\n';
	for (int i = 0; i < 8; i++) {
		for (int j = 3; j < 8; j++) {
			if (q[i] == copy[j]) {
				cout << i+1 << ' ';
			}
		}
	}
}