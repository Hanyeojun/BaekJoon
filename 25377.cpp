#include <iostream>
using namespace std;
int main() {
    int t, a, b, res = 1e9;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a <= b) res = min(res, b);
    }
    if (res == 1e9)
        cout << -1;
    else
        cout << res;
}