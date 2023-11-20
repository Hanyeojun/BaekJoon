// A -> B
#include <iostream>
#include <queue>
using namespace std;

int BFS(long long a, long long b) {
    queue<pair<long long, int>> q;
    q.push({a, 0});
    while (!q.empty()) {
        long long value = q.front().first;
        int cnt = q.front().second;
        q.pop();
        if (value == b) {
            return cnt + 1;
        }
        if (value * 2 <= b) {
            q.push({value * 2, cnt + 1});
        }
        if (value * 10 + 1 <= b) {
            q.push({value * 10 + 1, cnt + 1});
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long A, B;

    cin >> A >> B;
    cout << BFS(A, B);
}