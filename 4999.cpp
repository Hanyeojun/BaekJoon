#include <iostream>
#include <string>
using namespace std;
int main() {
  string str1, str2;
  cin >> str1 >> str2;
  if (str1.length() < str2.length()) {
    cout << "no";
  } else {
    cout << "go";
  }
}