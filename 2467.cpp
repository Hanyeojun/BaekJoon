#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, sum = 0, t = 2000000001;
	vector<int>v;
	cin >> n;
	int s = 0, e = n - 1, r1 = 0, r2 = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	while (s<e) {
		sum = v[s] + v[e];
		if (abs(sum) < abs(t)) {
			r1 = v[s];
			r2 = v[e];
			t = sum;
		}
		if (sum < 0) s++;
		else if (sum > 0) e--;
		else break;
	}
	cout << r1 << " " << r2;
}