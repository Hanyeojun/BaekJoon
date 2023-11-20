#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n;
	vector<int>v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	int s = 0, e = n - 1, x, sum, cnt = 0;
	cin >> x;
	sort(v.begin(), v.end());

	while (s<e) {
		sum = v[s] + v[e];
		if (sum == x) {
			cnt++;
			e--;
		}
		else if (sum < x) s++;
		else e--;
	}
	cout << cnt;
}