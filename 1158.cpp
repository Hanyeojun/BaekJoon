#include "iostream"
#include "queue"
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, k, tmp;
  queue<int> q;
  cin >> n >> k;
  for (int i = 1; i <= n; i++) q.push(i);
  cout << "<";
  while (!q.empty()) {
    for (int i = 0; i < k - 1; i++) {
      tmp = q.front();
      q.pop();
      q.push(tmp);
    }
    cout << q.front();
    if(q.size()>1) cout << ", ";
    q.pop();
  }
  cout << ">";
}