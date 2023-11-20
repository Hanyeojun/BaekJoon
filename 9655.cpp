#include "iostream"
#include "algorithm"
using namespace std;
int main() {
  int n, dp[1000];
  cin >> n;
  dp[0] = 0;
  dp[1] = 1;
  dp[2] = 2;
  for (int i = 3; i <= n; i++) {
    dp[i] = min(dp[i - 1] + 1, dp[i - 3] + 1);
  }
  cout << ((dp[n] % 2 == 1) ? "SK" : "CY");

//결국엔 n이 홀수인지 짝수인지에 따라 승자가 결정됨
//   int n;
//   cin >> n;
//   cout << ((n % 2 == 1) ? "SK" : "CY");
}