#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie();

	vector<int>v;
	int n, sum = 0, min = 2000000001;
	cin >> n;
	int start = 0, end = n - 1, r1 = 0, r2 = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	while (start < end) {
		sum = v[start] + v[end];
		if (abs(sum) < abs(min)) {
			min = sum;
			r1 = v[start];
			r2 = v[end];
		}
		if (sum < 0) start++;
		else if (sum > 0) end--;
		else break;
	}
	cout << r1 << " " << r2;
}