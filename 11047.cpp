#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n, pay, cnt = 0;
	cin >> n >> pay;
	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end(), greater<int>());
	 
	for (int i = 0; i < n; i++) {
		cnt += pay / v[i];
		pay %= v[i];
	}
	cout << cnt << '\n';
}