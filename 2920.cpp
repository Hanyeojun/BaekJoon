#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int arr[8] = {}, cnt = 0;
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
		if (i != 0 && arr[i - 1] < arr[i]) {
			cnt++;
		}
	}
	if (cnt == 7) cout << "ascending";
	else if (cnt == 0) cout << "descending";
	else cout << "mixed";
}
/*
	int arr[8] = {};
	int acd[8] = { 1,2,3,4,5,6,7,8 };
	int des[8] = { 8,7,6,5,4,3,2,1 };
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 8; i++) {
		if (arr[i] == acd[i]) {
			cnt++;
		}
		else if (arr[i] == des[i]) {
			cnt--;
		}
	}
	if (cnt == 8) cout << "ascending";
	else if (cnt == -8) cout << "descending";
	else cout << "mixed";
*/