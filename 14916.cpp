#include "iostream"
using namespace std;
int main() {
  int n, cnt = 0, chg;
  cin >> n;
  cnt = n / 5;
  chg = n % 5;
  while (cnt > 0 && chg % 2 != 0) {
    cnt--;
    chg += 5;
  }
  if (chg % 2 == 0)
    cout << cnt + chg / 2;
  else
    cout << -1;
}