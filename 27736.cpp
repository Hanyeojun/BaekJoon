#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, yes = 0, no = 0, mid = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (t == 1)
            yes++;
        else if (t == -1)
            no++;
        else if (t == 0)
            mid++;
    }
    if (n % 2 == 0) {
        if (mid >= n / 2) {
            cout << "INVALID";
            return 0;
        }
    } else {
        if (mid >= (n / 2) + 1) {
            cout << "INVALID";
            return 0;
        }
    }
    if (yes > no)
        cout << "APPROVED";
    else
        cout << "REJECTED";
}