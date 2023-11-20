#include<iostream>
#include<queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k, tmp = 0;
	queue<int> q1;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		q1.push(i);
	}
	cout << "<";
	while (!q1.empty()) {
		for (int i = 0; i < k - 1; i++) {
			tmp = q1.front();
			q1.pop();
			q1.push(tmp);
		}
		cout << q1.front();
		if (q1.size() > 1) {
			cout << ", ";
		}
		q1.pop();
	}
	cout << ">";
}