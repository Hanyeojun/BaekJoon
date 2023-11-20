#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, e;
    while (cin >> a >> b >> c >> d >> e) {
        int ans = a * 6 + b * 3 + c * 2 + d + e * 2;
        cout << ans << " ";
    }
}