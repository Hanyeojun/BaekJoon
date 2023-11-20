// 숨바꼭질2
#include <iostream>
#include <queue>
using namespace std;

int n, k, t, num;    // 수빈, 동생, 걸린 시간, 방법 개수
bool visit[100001];  // 방문
queue<pair<int, int>> q;

void BFS() {
    q.push({n, 0});   // 수빈 위치, 시간
    visit[n] = true;  // 수빈 위치 방문
    while (!q.empty()) {
        int x = q.front().first;
        int cnt = q.front().second;
        q.pop();

        visit[x] = true;  // pop 후 방문 처리
        // push 할 때 하게 되면 다른 방식의 결과가 생략될 수 있음
        if (!num && x == k) {                    // 처음 도착
            t = cnt;                             // 최소시간 저장
            num++;                               // 방법 +1
        } else if (num && x == k && t == cnt) {  // 도착하는 다른 경우
            num++;                               // 방법 +1
        }
        if (x + 1 <= 100000 && !visit[x + 1]) {
            q.push({x + 1, cnt + 1});
        }
        if (x - 1 >= 0 && !visit[x - 1]) {
            q.push({x - 1, cnt + 1});
        }
        if (x * 2 <= 100000 && !visit[x * 2]) {
            q.push({x * 2, cnt + 1});
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;
    BFS();
    cout << t << '\n' << num;
}