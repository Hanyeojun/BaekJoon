#include "iostream"
#include "string"
using namespace std;
int main() {
  int n;
  int count[5] = {0};
  string str;
  cin >> n >> str;
  for (int i = 0; i < n; i++) {
    if (str[i] == 'H') {
      count[0]++;
    } else if (str[i] == 'I') {
      count[1]++;
    }
    else if (str[i] == 'A') {
      count[2]++;
    }
    else if (str[i] == 'R') {
      count[3]++;
    }
    else if (str[i] == 'C') {
      count[4]++;
    }
  }
  int res = count[0];
  for (int i = 0; i < 5; i++) {
    res = min(count[i], res);
  }
  cout << res;
}