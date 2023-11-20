#include "iostream"
#include "stack"
#include "string"
using namespace std;
int main() {
  int n, cnt = 0;
  cin >> n;
  while (n--) {
    stack<char> st;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
      if (!st.empty() && st.top() == str[i]) {
        st.pop();
        continue;
      }
      else st.push((str[i]));
    }
    if(st.empty()) cnt++;
  }
  cout << cnt;
 }