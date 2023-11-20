#include <iostream>
#include <vector>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, m, sum = 0;
  vector<int> v;
  v.push_back(0);
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int t;
    cin >> t;
    v.push_back(t+v[i-1]);
  }
  cin >> m;
  while (m--) {
    int start = 0, end = 0;
    cin >> start >> end;
    cout << v[end] - v[start-1] << '\n';
  }
}