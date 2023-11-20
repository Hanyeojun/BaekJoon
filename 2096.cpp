// 내려가기
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, x, y, z;
    int maxDp[3] = {0}, minDp[3] = {0};
    cin >> n;

    cin >> maxDp[0] >> maxDp[1] >> maxDp[2];
    minDp[0] = maxDp[0];
    minDp[1] = maxDp[1];
    minDp[2] = maxDp[2];

    for (int i = 1; i < n; i++) {
        cin >> x >> y >> z;

        int tmp0 = maxDp[0], tmp1 = maxDp[1], tmp2 = maxDp[2];

        maxDp[0] = x + max(tmp0, tmp1);
        maxDp[1] = y + max({tmp0, tmp1, tmp2});
        maxDp[2] = z + max(tmp1, tmp2);

        tmp0 = minDp[0];
        tmp1 = minDp[1];
        tmp2 = minDp[2];

        minDp[0] = x + min(tmp0, tmp1);
        minDp[1] = y + min({tmp0, tmp1, tmp2});
        minDp[2] = z + min(tmp1, tmp2);
    }
    cout << max({maxDp[0], maxDp[1], maxDp[2]}) << ' ' << min({minDp[0], minDp[1], minDp[2]});
}