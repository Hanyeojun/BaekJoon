#include "iostream"
#include "queue"
#include <ios>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int n, t;
  queue<int> q;
  cin >> n;
  while (1) {
    cin >> t;
    if (t > 0) {
      if (q.size() < n) {
        q.push(t);
      }
    } else if (t == 0) {
      q.pop();
    } else if (t == -1)
      break;
  }
  if (q.empty()) {
    cout << "empty";
  } else {
    while (!q.empty()) {
      cout << q.front() << '\n';
      q.pop();
    }
  }
}