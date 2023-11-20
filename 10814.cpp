#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;
bool Comp(pair<int, string> a, pair<int, string> b) { //입력순으로 정렬
	return a.first < b.first;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	pair<int, string>p;
	vector<pair<int, string>>v;
	for (int i = 0; i < n; i++) {
		cin >> p.first >> p.second;
		v.push_back(p);
	}
	stable_sort(v.begin(), v.end(), Comp);
	for (int i = 0; i < n; i++) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}
}