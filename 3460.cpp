#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int r = 0;
        while (n > 0) {
            if (n % 2) cout << r << ' ';
            n /= 2;
            r++;
        }
    }
}