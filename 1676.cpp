#include <ios>
#include <iostream>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int n, cnt = 0;
  cin >> n;
  for (int i = 2; i <= n; i++) {
    if (i % 5 == 0) cnt++;
    if (i % 25 == 0) cnt++;
    if (i % 125 == 0) cnt++;
  }
  cout << cnt;
}