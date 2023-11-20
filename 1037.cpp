#include<iostream>
using namespace std;
int main() {
	int n = 0, min = 1000001, max = 0;
	int divisor[50] = {};
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> divisor[i];
		if (min > divisor[i]) {
			min = divisor[i];
		}
		if (max < divisor[i]) {
			max = divisor[i];
		}
	}
	cout << min * max;
}