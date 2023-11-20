#include <iostream>
using namespace std;
int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        int tmp, cnt = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            cnt += tmp / k;
        }
        cout << cnt << '\n';
    }
}