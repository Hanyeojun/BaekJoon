#include "iostream"
#include "algorithm"
#include "vector"
using namespace std;
int main() {
  int n;
  vector<int> v;
  int dp[301];
  cin >> n;
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    v.push_back(t);
  }
  dp[0] = v[0];
  dp[1] = v[0] + v[1];
  dp[2] = max(v[0] + v[2], v[1] + v[2]);
  for (int i = 3; i < n; i++) {
    dp[i] = max(v[i] + dp[i - 2], v[i] + v[i - 1] + dp[i - 3]);
  }
  cout << dp[n - 1];
}