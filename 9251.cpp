#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int dp[1001][1001];
int main() {
    string text1, text2;
    cin >> text1 >> text2;

    for (int i = 1; i <= text1.length(); i++) {
        for (int j = 1; j <= text2.length(); j++) {
            if (text1[i - 1] == text2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    cout << dp[text1.length()][text2.length()];
}