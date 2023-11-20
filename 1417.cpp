// 국회의원 선거
#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue<int> pq;
    int n, ds, ans = 0;
    cin >> n >> ds;
    for (int i = 1; i < n; i++) {
        int t;
        cin >> t;
        pq.push(t);
    }
    while (pq.size() >= 1 && pq.top() >= ds) {
        int x = pq.top();
        pq.pop();
        ans++;
        ds++;
        pq.push(x - 1);
    }
    cout << ans;
}