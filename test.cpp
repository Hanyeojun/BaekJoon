// #include <algorithm>
// #include <cstring>
// #include <iostream>
// #include <queue>
// #include <stack>
// #include <string>
// #include <utility>
// #include <vector>
// using namespace std;
// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
// }
#include <iostream>
using namespace std;

int matrix[500][2] = {0};  // matrix[i][0] => i번째 행렬의 행 크기, matrices[i][1] => i번째 행렬의 열 크기
int dp[500][500] = {0};    // dp[i][j] : i번째 행렬 ~ j번째 행렬까지의 곱셈 연산 최소 횟수

void Set_DP(int N);  // dp[i][j]를 계산 (Bottom - Up 방식)

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, r, c;

    cin >> N;  // 행렬의 수
    for (int i = 0; i < N; i++) {
        cin >> r >> c;  // r은 행 크기, c는 열 크기
        matrix[i][0] = r;
        matrix[i][1] = c;
    }
    Set_DP(N);
    cout << dp[0][N - 1];
}

void Set_DP(int N) {
    int j, min_cost;
    for (int range = 2; range <= N; range++)  // 행렬곱으로 묶는 행렬의 범위 range = 3 -> (ABC)
    {
        for (int i = 0; i < N; i++)  // 행렬곱 시작 행렬의 index
        {
            j = i + range - 1;  // 행렬곱 끝 행렬의 index
            if (j >= N) break;
            min_cost = matrix[i][0] * matrix[i][1] * matrix[j][1] + dp[i][i] + dp[i + 1][j];  // 기본 값은 A(BCD) 꼴
            for (int k = i + 1; k < j; k++) {
                min_cost = min(min_cost, dp[i][k] + dp[k + 1][j] + matrix[i][0] * matrix[k][1] * matrix[j][1]);
                // (AB)CD, (ABC)D, (ABCD)꼴로 비교
            }
            dp[i][j] = min_cost;
        }
    }
}