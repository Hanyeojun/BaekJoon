// 빙산
#include <cstring>
#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int N, M;
int sea[301][301];     // 빙산 입력
bool visit[301][301];  // 방문 확인
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
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
            if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
                if (!visit[nx][ny] && sea[nx][ny] != 0) {
                    visit[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int year = 0;  // 분리되는데 걸린 시간
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> sea[i][j];  // 빙산 입력
        }
    }
    while (1) {
        int cntBFS = 0;
        int zCnt[301][301] = {0};  // 빙산 주변 0 개수 카운트

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (!visit[i][j] && sea[i][j] != 0) {
                    BFS(i, j);
                    cntBFS++;
                }
            }
        }

        if (cntBFS >= 2) {  // 빙산이 나눠졌을 때
            cout << year;
            return 0;
        } else if (cntBFS == 0) {  // 빙산이 분리되기 전에 다 녹았을 때
            cout << 0;
            return 0;
        }

        memset(visit, false, sizeof(visit));

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (sea[i][j] != 0) {  // 빙산이 있을 때
                    int w = 0;         // 주변 물 개수 저장
                    for (int k = 0; k < 4; k++) {
                        int kx = i + dx[k];
                        int ky = j + dy[k];
                        if (kx >= 0 && kx < N && ky >= 0 && ky < M) {
                            if (sea[kx][ky] == 0) {
                                w++;
                            }
                        }
                    }
                    if (sea[i][j] - w > 0) zCnt[i][j] = sea[i][j] - w;
                }
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                sea[i][j] = zCnt[i][j];  // 빙산 계산에 영향주지 않도록 zCnt 배열에 저장 후 sea 변경
            }
        }

        year++;
    }
}