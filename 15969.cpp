#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n, arr[1001];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	cout << arr[n - 1] - arr[0];
}