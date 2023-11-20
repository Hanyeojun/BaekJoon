// 신입 사원. greedy
#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, cnt = 1;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i].first >> v[i].second;
        }
        sort(v.begin(), v.end());
        int tmp = 0;
        for (int i = 1; i < n; i++) {
            if (v[tmp].second > v[i].second) {
                tmp = i;
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
}