#include <iostream>
#include <string>
using namespace std;
int main(){
  int n, cnt = 0;
  string str;

  cin >> n;
  cin >> str;
  int result = n + 1;
  for (int i = 0; i < str.size(); i++) {
    if (str[i] == 'L') {
      cnt++;
      if (cnt % 2 == 0) {
        result--;
      }
    }
  }
  if (cnt != 0)
    cout << result << '\n';
  else
    cout << n << '\n';
}