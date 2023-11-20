// RGB거리
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, res = 0;
    int dp[1000][3] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> dp[i][j];
        }
    }
    // 최솟값 누적
    for (int i = 1; i < n; i++) {
        dp[i][0] += min(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] += min(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] += min(dp[i - 1][0], dp[i - 1][1]);
    }
    res = min({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});
    cout << res;
}