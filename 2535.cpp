#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int cty[100] = {0};
    vector<pair<int, pair<int, int>>> v;
    cin >> n;

    int c, s, g;
    for (int i = 0; i < n; i++) {
        cin >> c >> s >> g;
        v.push_back({g, {c, s}});
    }

    sort(v.begin(), v.end(), greater<pair<int, pair<int, int>>>());

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (cty[v[i].second.first] >= 2) continue;
        cout << v[i].second.first << ' ' << v[i].second.second << '\n';
        cnt++;
        cty[v[i].second.first]++;
        if (cnt == 3) return 0;
    }
}