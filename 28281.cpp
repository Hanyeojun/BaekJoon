#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }

    long long ans = 1e18;

    for (int i = 0; i < n - 1; i++) {
        ans = min(ans, 1LL * x * (v[i] + v[i + 1]));
    }

    cout << ans;
}