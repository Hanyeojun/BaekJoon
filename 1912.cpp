#include "iostream"
using namespace std;
int arr[100001];
int dp[100001];
int main() {
  int n, maxx;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  maxx = arr[0];
  dp[0] = arr[0];
  for (int i = 1; i < n; i++) {
    dp[i] = max(dp[i - 1] + arr[i], arr[i]);
    maxx = max(dp[i], maxx);
  }
  cout << maxx;
}