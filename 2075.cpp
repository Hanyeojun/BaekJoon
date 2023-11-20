// N번째 큰 수
#include <iostream>
#include <queue>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    priority_queue<int, vector<int>, greater<int>> pq;
    int n, t;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> t;
            pq.push(t);
        }
        while (pq.size() > n) {
            pq.pop();
        }
    }
    cout << pq.top();
}