#include <iostream>
using namespace std;
int main() {
  int time, aa = 0, bb = 0, cc = 0;
  cin >> time;
  if (time % 10 != 0) {
    cout << -1;
  } else {
    aa = time / 300;
    time %= 300;
    bb = time / 60;
    time %= 60;
    cc = time / 10;
    cout << aa << " " << bb << " " << cc;
  }
}