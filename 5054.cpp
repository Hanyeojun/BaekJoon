#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        vector<int> v;
        int ans = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            v.push_back(t);
        }
        sort(v.begin(), v.end());
        for (int i = n - 1; i > 0; i--) {
            ans += v[i] - v[i - 1];
        }
        cout << ans * 2 << '\n';
    }
}