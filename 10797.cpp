#include "iostream"
using namespace std;
int main() {
  int n, cnt = 0;
  cin >> n;
  for (int i = 0; i < 5; i++) {
    int t;
    cin >> t;
    if (t == n)
      cnt += 1;
  }
  cout << cnt;
}