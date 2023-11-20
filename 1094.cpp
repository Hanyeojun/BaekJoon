#include "iostream"
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int x, sum = 0, cnt = 0, org = 64;
  cin >> x;
  while (sum != x) {
    if (x < org + sum) {
			org /= 2;
			continue;
		}
		sum += org;
		cnt++;
		org /= 2;
	}
	cout << cnt << '\n';
}