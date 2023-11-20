#include <iostream>
using namespace std;
int main() {
  int x, y, z;
  while (cin >> x >> y >> z) {
    cout << max(y - x, z - y) - 1 << '\n';
  }
}