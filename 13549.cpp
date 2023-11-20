// 숨바꼭질3
#include <deque>
#include <iostream>
using namespace std;
int n, k;
int visit[100001];
deque<pair<int, int>> dq;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;

    dq.push_back({n, 0});

    while (!dq.empty()) {
        int x = dq.front().first;
        int t = dq.front().second;
        dq.pop_front();

        visit[x] = 1;

        if (x == k) {
            cout << t;
            break;
        }
        // 순간이동 우선순위 높으므로 push_front
        if (2 * x <= 100000 && !visit[2 * x]) {
            dq.push_front({2 * x, t});
        }
        // 걷는 경우
        if (x - 1 >= 0 && !visit[x - 1]) {
            dq.push_back({x - 1, t + 1});
        }
        if (x + 1 <= 100000 && !visit[x + 1]) {
            dq.push_back({x + 1, t + 1});
        }
    }
}