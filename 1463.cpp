#include "iostream"
#include "algorithm"
using namespace std;
int dp[1000001] = {0};
int main() {
  int n;
  cin >> n;
  dp[1] = 0;
  dp[2] = 1;
  dp[3] = 1;
  dp[4] = 2;
  for (int i = 5; i <= n; i++) {
    if (i % 2 == 0 && i % 3 != 0) {
      dp[i] = min(dp[i / 2] + 1, dp[i - 1] + 1);
    }
    else if (i % 2 != 0 && i % 3 == 0) {
      dp[i] = min(dp[i / 3] + 1, dp[i - 1] + 1);
    }
    else if (i % 2 == 0 && i % 3 == 0) {
      dp[i] = min(dp[i / 2] + 1, dp[i / 3] + 1);
    }
    else if (i % 2 != 0 && i % 3 != 0) {
      dp[i] = dp[i - 1] + 1;
    }
  }
  cout << dp[n];
}