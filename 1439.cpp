#include <iostream>
#include <string>
using namespace std;
int main() {
  string str;
  int zero = 0, one = 0;
  cin >> str;

  for (int i = 0; i < str.length(); i++) {
    if (str[i] != str[i + 1]) {
      if (str[i] == '0') {
        zero++;
      } else if (str[i] == '1') {
        one++;
      }
    }
  }
  cout << min(zero, one);
}