// 상범 빌딩
#include <cstring>
#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int L, R, C;
char building[31][31][31];
bool visit[31][31][31];
int dx[] = {-1, 1, 0, 0, 0, 0};
int dy[] = {0, 0, -1, 1, 0, 0};
int dz[] = {0, 0, 0, 0, -1, 1};
queue<pair<pair<int, int>, pair<int, int>>> q;

int BFS(int tz, int tx, int ty) {
    visit[tz][tx][ty] = true;
    q.push({{tz, tx}, {ty, 0}});

    while (!q.empty()) {
        int z = q.front().first.first;
        int x = q.front().first.second;
        int y = q.front().second.first;
        int t = q.front().second.second;
        q.pop();

        if (building[z][x][y] == 'E') return t;

        for (int i = 0; i < 6; i++) {
            int nz = z + dz[i];
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nz >= 0 && nz < L && nx >= 0 && nx < R && ny >= 0 && ny < C) {
                if (!visit[nz][nx][ny] && building[nz][nx][ny] != '#') {
                    visit[nz][nx][ny] = true;
                    q.push({{nz, nx}, {ny, t + 1}});
                }
            }
        }
    }
    return -1;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1) {
        memset(visit, false, sizeof(visit));
        memset(building, 48, sizeof(building));
        while (!q.empty()) {
            q.pop();
        }
        string str;
        int sx = 0, sy = 0, sz = 0;
        cin >> L >> R >> C;
        if (L == 0 && R == 0 && C == 0) return 0;
        for (int i = 0; i < L; i++) {
            for (int j = 0; j < R; j++) {
                cin >> str;
                for (int k = 0; k < C; k++) {
                    if (str[k] == 'S') {
                        sz = i;
                        sx = j;
                        sy = k;
                    }
                    building[i][j][k] = str[k];
                }
            }
        }
        int ans = BFS(sz, sx, sy);
        if (ans == -1) {
            cout << "Trapped!" << '\n';
        } else {
            cout << "Escaped in " << ans << " minute(s)." << '\n';
        }
    }
}