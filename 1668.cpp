#include<iostream>
#include<vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, tmp, left = 1, right = 1;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	tmp = v[0];
	for (int i = 0; i < v.size(); i++) {
		if (tmp < v[i]) {
			left++;
			tmp = v[i];
		}
	}
	tmp = v[v.size() - 1];
	for (int i = v.size() - 1; i >= 0; i--) {
		if (tmp < v[i]) {
			right++;
			tmp = v[i];
		}
	}
	cout << left << '\n' << right;
}