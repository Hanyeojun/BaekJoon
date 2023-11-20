#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int burger[3], drink[2];
  cin >> burger[0] >> burger[1] >> burger[2] >> drink[0] >> drink[1];
  cout << min({burger[0], burger[1], burger[2]}) + min(drink[0], drink[1]) - 50;
}