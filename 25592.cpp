#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, i = 1;
	cin >> n;
	for (i; n > 0; i++) {
		n -= i;
	}
	if (n == 0) {
		// i 가 짝수일때 이긴거
		if (i % 2 == 0) cout << "0\n";
		// i 가 홀수일때 진거, i개 추가해야함
		else cout << i << '\n';
	}
	else {
		// i 가 짝수일때 -(n)출력
		if (i % 2 == 0) cout << -(n);
		// 홀수일때 0
		else cout << "0\n";
	}
}