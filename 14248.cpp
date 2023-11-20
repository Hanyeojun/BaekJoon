// 점프 점프
#include <iostream>
#include <queue>
using namespace std;

int stone[100001];
int visit[100001];
int n, s, cnt;
queue<int> q;

void BFS() {
    visit[s] = 1;
    q.push(s);
    while (!q.empty()) {
        int x = q.front();
        q.pop();

        int left = x - stone[x];
        int right = x + stone[x];

        if (left >= 1 && !visit[left]) {  // 순서 중요
            visit[left] = 1;
            q.push(left);
        }
        if (right <= n && !visit[right]) {
            visit[right] = 1;
            q.push(right);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> stone[i];
    }
    cin >> s;
    BFS();
    for (int i = 1; i <= n; i++) {
        if (visit[i]) {
            cnt++;
        }
    }
    cout << cnt;
}