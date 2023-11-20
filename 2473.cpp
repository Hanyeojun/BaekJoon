#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	long long sum = 0, min = 3100000001, r1 = 0, r2 = 0, r3 = 0;
	vector<long long>v, k;
	cin >> n;
	int s = 0, e = n - 1;

	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		s = i + 1;
		e = n - 1;
		while (s < e) {
			sum = v[i] + v[s] + v[e];
			if (abs(sum) < abs(min)) {
				min = sum;
				r1 = v[i];
				r2 = v[s];
				r3 = v[e];
			}
			if (sum < 0)s++;
			else if (sum > 0)e--;
			else break;
		}
	}
	cout << r1 << " " << r2 << " " << r3;
}