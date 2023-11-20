#include<iostream>
#include<vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, sum = 0;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sum += v[i];
	}
	cout << sum - n + 1;
}