#include <iostream>
using namespace std;

int main() {
	int l, p, v;

	int tmp = 1;
	while (1) {
		int cnt = 0;
		cin >> l >> p >> v;
		if (l == 0 && p == 0 && v == 0)
			break;

		cnt = (v / p) * l;
		if (v % p <= l)
			cnt += v % p;
		else
			cnt += l;

		cout << "Case " << tmp << ": " << cnt << '\n';
		tmp++;
	}
}