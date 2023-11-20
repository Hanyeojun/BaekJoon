#include <iostream>
using namespace std;
// (i-1)번째에서 1을 붙이는 경우 + (i-2)번째에서 00을 붙이는 경우
// (i-2)번째에서 1을 두 개 붙이는 경우는 (i-1)번째에서 1을 붙이는 경우와 중복되므로 제외해야함.
int dp[1000001];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    dp[4] = 5;
    for (int i = 5; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
        dp[i] %= 15746;  // 출력문에서 연산하면 값이 초과할 수 있으므로
    }
    cout << dp[n];
}