// 통나무 건너뛰기
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int ans = -1;
        for (int i = 0; i < n - 2; i++) {
            ans = max(ans, v[i + 2] - v[i]);
        }
        cout << ans << '\n';
    }
}