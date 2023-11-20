#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie();

    int t, p, m;
    cin >> t;
    while (t--) {
        int cnt = 0, arr[501] = {0};
        cin >> p >> m;
        for (int i = 0; i < p; i++) {
            int x;
            cin >> x;
            if (arr[x] != 0)
                cnt++;
            else
                arr[x] = 1;
        }
        cout << cnt << '\n';
    }
}