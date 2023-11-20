#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a[7], sum = 0, minn = 101;
        for (int i = 0; i < 7; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                sum += a[i];
                if (minn > a[i]) {
                    minn = a[i];
                }
            }
        }
        cout << sum << ' ' << minn << '\n';
    }
}