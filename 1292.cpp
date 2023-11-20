#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[1001] = {}, a = 0, b = 0, n = 1, res = 0;
	bool flag = 0;
	for (int i = 1; i <=1000; i++) {
		for (int j = 1; j <= i; j++) {
			if (n > 1000) {
				flag = 1;
				break;
			}
			arr[n++] = i;
		}
		if (flag) {
			break;
		}
	}
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		res += arr[i];
	}
	cout << res;
}