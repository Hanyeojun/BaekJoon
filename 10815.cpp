#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m, n1, m1;
	vector<int>v,c,r;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> n1;
		v.push_back(n1);
	}
	sort(v.begin(), v.end());
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> m1;
		int start = 0, end = n - 1, mid = 0, cnt = 0;
		while (start <= end) {
			mid = (start + end) / 2;
			if (v[mid] == m1) {
				cnt++;
				break;
			}
			else if (v[mid] < m1) start = mid + 1;
			else end = mid - 1;
		}
		if (cnt > 0) r.push_back(1);
		else r.push_back(0);
	}
	for (int i = 0; i < r.size(); i++) cout << r[i] << " ";
}