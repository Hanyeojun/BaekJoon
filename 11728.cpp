#include "iostream"
#include "algorithm"
#include "vector"
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, m, t;
  vector<int> a, b;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> t;
    a.push_back(t);
  }
  for (int i = 0; i < m; i++) {
    cin >> t;
    b.push_back(t);
  }
  for (int i = 0; i < m; i++) {
    a.push_back(b[i]);
  }

  stable_sort(a.begin(), a.end());

  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
}