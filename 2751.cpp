#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	vector<int> v;
	int N;
	cin >> N;
	int num;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < N; i++) {
		cout << v[i] << '\n';
	}
	return 0;
}
/*
	int arr[100000] = {};
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << '\n';
	}
*/