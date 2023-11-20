#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int l = 0, r = n - 1, cnt = 0;
    while (l < r) {
        if (v[l] + v[r] > m)
            r--;
        else if (v[l] + v[r] < m)
            l++;
        else {
            l++;
            r--;
            cnt++;
        }
    }
    cout << cnt;
}