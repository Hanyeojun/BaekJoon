#include "iostream"
using namespace std;

long long gcd(long long x, long long y) {
  if (x % y == 0)
    return y;
  return gcd(y, x % y);
}

long long lcm(long long x, long long y) {
  return x * y / gcd(x, y);
}

int main() {
  long long a, b, res;
  cin >> a >> b;
  res = lcm(a, b);
  cout << res;
}