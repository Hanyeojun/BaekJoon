#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	vector<int>v;
	int n, sum = 0, t = 200000001;
	cin >> n;
	int s = 0, e = n - 1;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	while (s<e) {
		sum = v[s] + v[e];
		if (abs(sum) < abs(t)) t = sum;
		if (sum < 0) s++;
		else if (sum > 0) e--;
		else break;
	}
	cout << t;
}