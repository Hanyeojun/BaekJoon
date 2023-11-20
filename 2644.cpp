// 촌수계산
#include <iostream>
#include <queue>
using namespace std;

int mapp[101][101];
int visit[101];
queue<int> q;

void BFS(int N, int a) {
    q.push(a);
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (int i = 1; i <= N; i++) {
            if (mapp[x][i] != 0 && visit[i] == 0) {
                q.push(i);
                visit[i] = visit[x] + 1;
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, h1, h2, m;
    int hx, hy;
    cin >> n;
    cin >> h1 >> h2;
    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> hx >> hy;
        mapp[hx][hy] = 1;
        mapp[hy][hx] = 1;
    }
    BFS(n, h1);
    if (visit[h2] == 0) visit[h2] = -1;
    cout << visit[h2];
}