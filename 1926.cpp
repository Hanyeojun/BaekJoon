#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

int paper[501][501];        // 도화지
bool visit[501][501];       // 방문 확인
int dx[4] = {1, 0, -1, 0};  // x 방향
int dy[4] = {0, 1, 0, -1};  // y 방향
queue<pair<int, int>> q;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;  // 세로, 가로
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> paper[i][j];
        }
    }
    int pnum = 0, pmax = 0;  // 그림 개수, 그림 최대 넓이
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (paper[i][j] == 0 || visit[i][j]) continue;  // 0이거나 방문했으면 제외
            pnum++;                                         // 그 외엔 그림 개수 1 증가
            visit[i][j] = true;                             // 방문처리
            q.push({i, j});                                 // queue에 좌표 저장
            int area = 0;                                   // 현재 그림 크기
            while (!q.empty()) {
                area++;  // 현재 그림 크기 증가
                for (int dir = 0; dir < 4; dir++) {
                    int nx = q.front().first + dx[dir];
                    int ny = q.front().second + dy[dir];
                    if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
                    if (visit[nx][ny] || paper[nx][ny] != 1) continue;
                    visit[nx][ny] = 1;
                    q.push({nx, ny});
                }
                q.pop();
            }
            pmax = max(pmax, area);
        }
    }
    cout << pnum << '\n' << pmax;
}