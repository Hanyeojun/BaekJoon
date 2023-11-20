// 주식
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long ans = 0;
        int maxN = -1;

        for (int i = n - 1; i >= 0; i--) {
            maxN = max(maxN, v[i]);
            ans += maxN - v[i];
        }

        cout << ans << '\n';
    }
}