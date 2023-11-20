#include "iostream"
#include "queue"
using namespace std;
int main() {
  int n;
  queue<int> q;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    q.push(i);
  }
  while (!q.empty()) {
    cout << q.front() << " ";
    q.pop();
    int tmp = q.front();
    q.push(tmp);
    q.pop();
  }
}