#include "iostream"
using namespace std;
int main() {
  int n, k, res = 0, tmp = 0, cnt = 0;
  cin >> n >> k;
  if (n <= k) {
    cout << 0;
    return 0;
  }
  else {
    res = 0;
    while (1) {
      cnt = 0;
      tmp = n;
      while (tmp > 0) {
        if (tmp % 2 == 1) {
          cnt++;
        }
        tmp /= 2;
      }
      if (cnt <= k) break;
      n++;
      res++;
    }
  }
    cout << res;
}