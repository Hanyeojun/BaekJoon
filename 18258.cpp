#include "iostream"
#include "queue"
#include "string"
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t, n;
  queue<int> q;
  string s;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> s;
    if (s == "push") {
      cin >> n;
      q.push(n);
    }
    else if (s == "pop") {
      if (q.empty()) cout << "-1\n";
      else {
        cout << q.front() << '\n';
        q.pop();
        }
    }
    else if (s == "size")
        cout << q.size() << '\n';
    else if (s == "empty")
        cout << q.empty() << '\n';
    else if (s == "front") {
        if (q.empty()) cout << "-1\n";
        else cout << q.front() << '\n';
    }
    else if (s == "back") {
        if (q.empty()) cout << "-1\n";
        else cout << q.back() << '\n';
    }
  }
}