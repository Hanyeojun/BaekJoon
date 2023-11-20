#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    int a, b, c;
    while (t--) {
        int ans = 0;
        cin >> a >> b >> c;
        ans = (min(a, min(b, c)));
        cout << ans << '\n';
    }
}