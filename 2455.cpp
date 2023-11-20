#include "iostream"
using namespace std;
int main() {
  int a, b, max = 0, sum = 0;
  for (int i = 0; i < 4; i++) {
    cin >> a >> b;
    sum += b - a;
    if (max < sum)
      max = sum;
  }
  cout << max;
}