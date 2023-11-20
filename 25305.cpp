#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n = 0, k = 0, arr[1000]	= {};
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	cout << arr[n - k];
}