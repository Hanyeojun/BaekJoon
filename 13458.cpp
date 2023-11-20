#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int>v;
	int n, b, c, t = 1;
	long long res = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	cin >> b >> c;
	for (int i = 0; i < n; i++) {
		t = 1;
		if (v[i] > b) {
			t += (v[i] - b) / c;
			if ((v[i] - b) % c > 0) t += 1;
		}
		res += t;
	}
	cout << res;
}