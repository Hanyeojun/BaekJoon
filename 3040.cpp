#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int dwarf[9] = {};
  int sum = 0, x, y;
  for (int i = 0; i < 9; i++) {
    cin >> dwarf[i];
    sum += dwarf[i];
  }
  for (int i = 0; i < 9; i++) {
    for (int j = i + 1; j < 9; j++) {
      if (sum - dwarf[i] - dwarf[j] == 100) {
        x = dwarf[i];
        y = dwarf[j];
        break;
      }
    }
  }
  sort(dwarf, dwarf + 9);
  for (int i = 0; i < 9; i++) {
    if (dwarf[i] == x || dwarf[i] == y) {
      continue;
    }
    cout << dwarf[i] << '\n';
  }
}