#include <iostream>
using namespace std;
int main() {
  int a, b, c, m, t = 0, cnt = 0;
  cin >> a >> b >> c >> m;
  for (int i = 0; i < 24; i++) {
    if (t + a <= m) {
      t += a;
      cnt++;
    } else {
      t -= c;
      if (t < 0) {
        t = 0;
      }
    }
  }
  cout << cnt * b;
}