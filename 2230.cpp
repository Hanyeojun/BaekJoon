#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	vector<int>v;
	cin >> n >> m;
	int s = 0, e = 0, tmp = 0, res = 2000000001;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	sort(v.begin(), v.end());

	while (s < n && e < n) {
		tmp = v[s] - v[e];
		if (tmp == m) {
			res = tmp;
			break;
		}
		if (tmp < m) s++;
		else {
			if (tmp < res) res = tmp;
			e++;
		}
	}
	cout << res;
}