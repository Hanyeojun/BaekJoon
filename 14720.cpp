#include <iostream>
using namespace std;
int main() {
	int n, cnt = 0, num = 0;
	int arr[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int j = 0; j < n; j++) {
		if (arr[j] == 0 && num == 0) {
			cnt++;
			num = 1;
		}
		else if (arr[j] == 1 && num == 1) {
			cnt++;
			num = 2;
		}
		else if (arr[j] == 2 && num == 2) {
			cnt++;
			num = 0;
		}
	}
	cout << cnt;
}