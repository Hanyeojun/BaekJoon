#include <iostream>
#include <string>
using namespace std;
int main() {
  string str1, str2;
  int max, min;
  cin >> str1 >> str2;
  for (int i = 0; i < str1.length(); i++) {
    if (str1[i] == '5') {
      str1[i] = '6';
    }
  }
  for (int i = 0; i < str2.length(); i++) {
    if (str2[i] == '5') {
      str2[i] = '6';
    }
  }
  max = stoi(str1) + stoi(str2);

  for (int i = 0; i < str1.length(); i++) {
    if (str1[i] == '6') {
      str1[i] = '5';
    }
  }
  for (int i = 0; i < str2.length(); i++) {
    if (str2[i] == '6') {
      str2[i] = '5';
    }
  }
  min = stoi(str1) + stoi(str2);
  cout << min << " " << max;
}