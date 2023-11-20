#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tc = 0;
	cin >> tc;

	while (tc--) {
		bool arr[10001] = { 0,1,0 };
		int n = 0;
		cin >> n;
		int sqr = sqrt(n), h = n / 2, left = 0, right = 0;
		int sum = 0;

		for (int i = 2; i <= sqr; ++i) {
			if (arr[i] == 0) {
				for (int j = i * 2; j <= 10000; j += i) {
					arr[j] = 1;
				}
			}
		} 
		for (int i = 0; i <= h - 1; i++) {
			left = h - i;
			right = n - left;
			if (arr[left] == 0 && arr[right] == 0) {
				cout << left << ' ' << right << '\n';
				break;
			}
		}
	}
}