#include<iostream>
#include<queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	queue<int>q;
	int n, cnt = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	while (q.size() > 1) {
		if (cnt % 2 == 0) q.pop();
		else {
			q.push(q.front());
			q.pop();
		}
		cnt++;
	}
	cout << q.front();
}