#include "iostream"
using namespace std;
int main() {
  long long dp[36] = {1};
  int n;
  cin >> n;
  for (int i = 1; i < 36; i++) {
    for (int j = 0; j <= i - 1; j++) {
      dp[i] += dp[j] * dp[i - 1 - j];
    }
  }
  cout << dp[n];
}