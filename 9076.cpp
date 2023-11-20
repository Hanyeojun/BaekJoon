#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	while (n--) {
		vector<int>v(5);
		for (int i = 0; i < 5; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		if (v[3] - v[1] >= 4) {
			cout << "KIN\n";
			continue;
		}
		int sum = 0;
		for (int i = 1; i < 4; i++) {
			sum += v[i];
		}
		cout << sum << '\n';
	}
}