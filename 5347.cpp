#include "iostream"
using namespace std;

long long gcd(long long a, long long b) {
  long long c = a % b;
  while (c != 0) {
    a = b;
    b = c;
    c = a % b;
  }
  return b;
}
int main() {
  long long t, a, b, res = 0;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    res = (a * b) / gcd(a, b);
    cout << res << '\n';
  }
}