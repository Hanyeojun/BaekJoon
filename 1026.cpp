#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, s = 0, max = -1;
	cin >> n;
	int* a = new int[n];
	int* b = new int[n];
	int* copy = new int[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];

	sort(a, a + n);
	sort(b, b + n, greater<int>());
	for (int i = 0; i < n; i++) s += a[i] * b[i];
	cout << s;
	delete[]a;
	delete[]b;
	delete[]copy;
}