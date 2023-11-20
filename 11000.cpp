#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    vector<pair<int, int>> v;
    priority_queue<int, vector<int>, greater<int>> pq;
    int n, s, e;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s >> e;
        v.push_back({s, e});
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            pq.push(v[0].second);
        } else {
            if (pq.top() > v[i].first) {
                pq.push(v[i].second);
            } else {
                pq.pop();
                pq.push(v[i].second);
            }
        }
    }
    cout << pq.size();
}