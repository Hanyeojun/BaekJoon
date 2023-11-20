#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	long long arr[68] = { 1,1,2,4 };
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 4; i < 68; i++) {
			arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3] + arr[i - 4];
		}
		cout << arr[n] << '\n';
	}
}