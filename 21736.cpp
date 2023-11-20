#include <iostream>
#include <queue>
using namespace std;

int n, m, cnt = 0;
char mapp[601][601];
bool visit[601][601];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
queue<pair<int, int>> q;

void BFS(int a, int b) {
    q.push({a, b});
    visit[a][b] = true;
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visit[nx][ny]) {
                if (mapp[nx][ny] == 'X') continue;
                if (mapp[nx][ny] == 'P') cnt++;
                visit[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> str;
        for (int j = 0; j < m; j++) {
            mapp[i][j] = str[j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mapp[i][j] == 'I') {
                BFS(i, j);
            }
        }
    }
    if (cnt == 0)
        cout << "TT";
    else
        cout << cnt;
}