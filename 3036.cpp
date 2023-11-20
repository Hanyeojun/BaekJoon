#include "iostream"
using namespace std;

int gcd(int x, int y) {
  int z = x % y;
  while (z != 0) {
    x = y;
    y = z;
    z = x % y;
  }
  return y;
}
int main() {
  int n, tgcd, arr[100];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 1; i < n; i++) {
    tgcd = gcd(arr[0], arr[i]);
    cout << arr[0] / tgcd << '/' << arr[i] / tgcd << '\n';
  }
}