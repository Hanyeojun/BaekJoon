#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<int, int>> vt;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, a, b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		vt.push_back({ a,b });
	}
	stable_sort(vt.end(), vt.begin());
	for (int i = 0; i < n; i++) {
		cout << vt[i].first << ' ' << vt[i].second << '\n';
	}
}