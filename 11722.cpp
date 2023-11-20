// 가장 긴 감소하는 부분 수열
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> v(n), dp(n, 1);
    for (int i = 0; i < n; i++) {
        cin >> v[i];  // 값 입력
    }
    for (int i = 0; i < n; i++) {               // 수열 길이만큼 반복
        for (int j = 0; j < i; j++) {           // 현위치 이전 값들과 비교
            if (v[i] < v[j]) {                  // 현재값보다 큰 값이 있으면
                dp[i] = max(dp[i], dp[j] + 1);  // 현재 dp 1 증가 후 이전 dp와 최댓값 비교
            }
        }
    }
    sort(dp.begin(), dp.end(), greater<int>());
    cout << dp[0];
}