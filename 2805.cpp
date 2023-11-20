#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  long long n, m, sum = 0, res = 0;
  vector<int> v;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    v.push_back(t);
  }

  sort(v.begin(), v.end());
  long long start = 0, end = v[n - 1];

  while (start <= end) {
    sum = 0;
    long long mid = (start + end) / 2;
    for (int i = 0; i < n; i++) {
      if (mid < v[i]) {
        sum += v[i] - mid;
      }
    }
    if (sum < m) {
      end = mid - 1;
    } else if (sum >= m) {
      if (res < mid) {
        res = mid;
      }
      start = mid + 1;
    }
  }
  cout << res;
}