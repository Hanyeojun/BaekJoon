#include "iostream"
#include "deque"
#include <ios>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int n, m, cnt = 0;
  cin >> n >> m;
  deque<int> dq;
  for (int i = 1; i <= n; i++) {
    dq.push_back(i);
  }
  while (m--) {
    int num, point;
    cin >> num;
    for (int i = 0; i < dq.size(); i++) {
      if (dq[i] == num) {
        point = i;
        break;
      }
    }
    if (point <= dq.size() / 2) {
      for (int i = 0; i < point; i++) {
        dq.push_back(dq.front());
        dq.pop_front();
        cnt++;
      }
      dq.pop_front();
    }
    else {
      for (int i = 0; i < dq.size() - point; i++) {
        dq.push_front(dq.back());
        dq.pop_back();
        cnt++;
      }
      dq.pop_front();
    }
  }
  cout << cnt;
}