#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, t, cnt = 0;
    cin >> n;
    vector<pair<int, int>> v, res;

    for (int i = 0; i < n; i++) {
        cin >> t;
        v.push_back({t, i});
    }

    sort(v.begin(), v.end());

    res.push_back({v[0].second, 0});

    for (int i = 1; i < n; i++) {
        if (v[i - 1].first == v[i].first)
            res.push_back({v[i].second, cnt});
        else
            res.push_back({v[i].second, ++cnt});
    }

    sort(res.begin(), res.end());

    for (int i = 0; i < n; i++) cout << res[i].second << ' ';
}