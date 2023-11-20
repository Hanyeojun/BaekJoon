#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, arr[46] = { 0,1 };
	cin >> n;
	for (int i = 2; i < n + 1; i++) arr[i] = arr[i - 1] + arr[i - 2];
	cout << arr[n];
}