// 스티커
#include <algorithm>
#include <iostream>
using namespace std;
int board[2][100000];
int dp[2][100000];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                cin >> board[i][j];
            }
        }
        dp[0][0] = board[0][0];
        dp[1][0] = board[1][0];
        dp[0][1] = dp[1][0] + board[0][1];
        dp[1][1] = dp[0][0] + board[1][1];

        for (int i = 2; i < n; i++) {
            dp[0][i] = board[0][i] + max(dp[1][i - 1], dp[1][i - 2]);
            dp[1][i] = board[1][i] + max(dp[0][i - 1], dp[0][i - 2]);
        }
        cout << max(dp[0][n - 1], dp[1][n - 1]) << '\n';
    }
}