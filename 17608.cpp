#include<iostream>
#include<stack>
using namespace std;
int main() {
	int n, max = 0, m, cnt = 0;
	stack<int> k;
	cin >> n;
	while(n--) {
		cin >> m;
		k.push(m);
	}
	while (k.size()) {
		if (k.top() > max) {
			max = k.top();
			cnt++;
		}
		k.pop();
	}
	cout << cnt;
}