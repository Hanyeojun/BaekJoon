#include "iostream"
using namespace std;

long long gcd(long long a, long long b) {
  int c = a % b;
  while (c != 0) {
    a = b;
    b = c;
    c = a % b;
  }
  return b;
}
int main() {
  long long n, m, tmp;
  char ch;
  cin >> n >> ch >> m;
  tmp = gcd(n, m);
  cout << n / tmp << ':' << m / tmp;
}