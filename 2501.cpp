#include <iostream>
using namespace std;

int main() {
	int n, k = 0;
	int divisor[10000] = { 0, };
	cin >> n >> k;

	int num = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			divisor[num] = i;
			num++;
		}
	}
	if (num < k) {
		cout << "0" << '\n';
	}
	else
		cout << divisor[k-1] << '\n';        
}