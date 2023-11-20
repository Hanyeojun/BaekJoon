#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main() {
    int n, cnt = 1;
    vector<pair<int, int>> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({b, a});
    }
    stable_sort(v.begin(), v.end());
    int time = v[0].first;
    for (int i = 1; i < n; i++) {
        if (time <= v[i].second) {
            cnt++;
            time = v[i].first;
        }
    }
    cout << cnt;
}