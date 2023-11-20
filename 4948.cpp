#include<iostream>
#include<math.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	while (1) {
		int n = 0, cnt = 0;
		bool arr[246913] = { 0,1,0 };
		cin >> n;
		if (n == 0) {
			return 0;
		}
		int sqr = sqrt(2 * n);
		for (int i = 2; i <= sqr; ++i) {
			if (arr[i] == 0) {
				for (int j = i * 2; j <= 246912; j += i) {
					arr[j] = 1;
				}
			}
		}
		for (int i = n+1; i <= 2 * n; i++) {
			if (arr[i] == 0) {
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
}