// 구간 합 구하기 5
#include <iostream>
using namespace std;
int arr[1025][1025];
int dp[1025][1025];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + arr[i][j];  // 누적합 저장
            // 누적합 = 가로 전체 합 +세로 전체 합 - 중복값 + 입력값
        }
    }
    int x1, y1, x2, y2, ans;
    for (int i = 0; i < m; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        ans = dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1];
        cout << ans << '\n';
    }
}