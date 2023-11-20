#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, n;
    cin >> a >> b >> n;
    int res = abs(a - b);
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        res = min(abs(t - b) + 1, res);
    }
    cout << res;
}