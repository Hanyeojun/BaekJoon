#include<iostream>
#include<math.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int m = 0, n = 0;
	bool arr[1000001] = { 0,1,0 };
	cin >> m >> n;
	int sqr = sqrt(n);

	for (int i = 2; i <= sqr; ++i) {
		if (arr[i] == 0) {
			for (int j = i * 2; j <= 1000000; j += i) {
				arr[j] = 1;
			}
		}
	}
	for (int i = m; i <= n; i++) {
		if (arr[i] == 0) {
			cout << i << '\n';
		}
	}
}