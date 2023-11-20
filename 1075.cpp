#include <iostream>
using namespace std;
int main() {
  int n, f, res = 0;
  cin >> n >> f;
  n /= 100;
  n *= 100;
  for (int i = n; i < n + 100; i++) {
    if (i % f == 0) {
      res = i % 100;
      break;
    }
  }
  if (res < 10) {
    cout << "0";
  }
  cout << res;
}