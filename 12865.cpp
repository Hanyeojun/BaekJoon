// 0-1 Knapsack 배낭문제
#include <algorithm>
#include <iostream>
using namespace std;

int dp[101][100001];
int w[101];
int v[101];

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            // 물품을 넣을 수 있을 때
            if (j - w[i] >= 0) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
            }
            // 물품을 넣을 수 없을 때
            else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][k];
}
// 입력받은 w와 v에 따라서 해당하는 dp의 인덱스에 물품의 가치를 넣어준다
// 물품을 넣을 수 있다면
// (지금까지의 물품 가치)와 (현재 물품의 가치 + 이전 물품 중 남은 무게에 해당하는 물품의 가치) 중에서
// 더 큰 값을 dp에 넣어준다
// 물품을 넣을 수 없다면 이전 물품의 가치를 그대로 받아온다