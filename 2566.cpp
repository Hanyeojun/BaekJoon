#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, n, m, max = 0;
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cin >> a;
			if (a >= max) {
				max = a;
				n = i;
				m = j;
			}
		}
	}
	cout << max << '\n' << n << " " << m << '\n';
}