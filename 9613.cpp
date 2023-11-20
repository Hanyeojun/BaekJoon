#include "iostream"
using namespace std;

int gcd(int a, int b) {
  int c = a % b;
  while (c != 0) {
    a = b;
    b = c;
    c = a % b;
  }
  return b;
}

int main() {
  int t, n, arr[100]={0};
  long long sum = 0;
  cin >> t;
  while (t--) {
    sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        sum += gcd(arr[i], arr[j]);
      }
    }
    cout << sum << '\n';
  }
}