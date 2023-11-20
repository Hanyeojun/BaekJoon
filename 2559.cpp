#include "iostream"
#include "vector"
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, k, maxx= -1e9, start = 0, sum = 0;
  vector<int> v;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    v.push_back(t);
  }
  for (int i = 0; i < n; i++) {
    sum += v[i];
    if (i >= k - 1) {
      maxx = max(maxx, sum);
      sum-=v[start++];
    }
  }
  cout << maxx;
}