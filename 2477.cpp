#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t, s =1, b = 0, m1=0, m2 = 0;
	cin >> t;
	vector<pair<int,int>>v;
	for (int i = 0; i < 6; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back({ x,y });
	}
	for (int i = 0; i < v.size(); i++) {
		if (v[i].first == v[(i + 2) %6].first) s *= v[(i+1)%6].second;
	}
	for (int i = 0; i < v.size(); i++) {
		if (v[i].first == 1 || v[i].first == 2) {
			if (m1 < v[i].second) m1 = v[i].second;
		}
		else if (v[i].first == 3 || v[i].first == 4) {
			if (m2 < v[i].second) m2 = v[i].second;
		}
	}
	b = m1 * m2;
	cout << t * (b - s);
}