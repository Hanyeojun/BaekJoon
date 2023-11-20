#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
using namespace std;
int main() {
  string s;
  vector<string> str;
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    string tmp = s.substr(i, s.length());
    str.push_back(tmp);
  }
  sort(str.begin(), str.end());
  for (int i = 0; i < str.size(); i++) {
    cout << str[i] << '\n';
  }
}