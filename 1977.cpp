#include "iostream"
using namespace std;
int main() {
  int min = 10001, n, m, sum = 0, cnt = 0;
  cin >> m >> n;
  for (int i = 1; i <= 100; i++) {
    if (i * i >= m && i * i <= n) {
      sum += i * i;
      cnt++;
    }
    if (i * i >= m && i * i <= n && min > i * i) {
      min = i * i;
    }
  }
  if (cnt == 0){
    cout << -1;
    return 0;
  }
    cout << sum << '\n' << min;
}