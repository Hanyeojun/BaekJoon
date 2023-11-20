#include "iostream"
using namespace std;

int main() {
    int n, dp[41];
    cin >> n;
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i < 41; i++) {
      dp[i] = dp[i - 1] + dp[i - 2];
    }
    for (int i = 0; i < n; i++) {
      int t;
      cin >> t;
      if (t == 0)
        cout << 1 << " " << 0 << '\n';
      else if (t == 1)
        cout << 0 << " " << 1 << '\n';
      else
        cout << dp[t - 1] << " " << dp[t] << '\n';
    }
}