#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, k;
    long long dp[100] = {0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9};
    cin >> t;
    for (int i = 11; i <= 100; i++) {
        dp[i] = dp[i - 1] + dp[i - 5];
    }
    while (t--) {
        cin >> k;
        cout << dp[k] << '\n';
    }
}