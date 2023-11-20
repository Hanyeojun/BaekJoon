// 아기 상어
#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int space[21][21];
queue<pair<pair<int, int>, int>> q;
int dx[] = {0, -1, 1, 0};  // 위에서 아래로, 왼쪽에서 오른쪽으로
int dy[] = {-1, 0, 0, 1};  //(0, -1), (-1, 0), (1, 0), (0, 1)
int sx, sy;                // 상어의 좌표
int anstime;               // 최종 걸린 시간
int cnt;                   // 물고기 먹은 횟수
int ssize = 2;             // 상어 크기
bool help = false;         // 엄마 상어에게 도움 요청 유무
bool ate = false;          // 물고기 먹었는지 판단

void BFS(int n, int shx, int shy, bool visit[][21], int shsize) {
    int tmp = 0;  // 물고기 한 마리 먹는데 걸린 시간
    q.push({{shx, shy}, 0});
    visit[shy][shx] = true;  // 방문 처리

    while (!q.empty()) {
        int x = q.front().first.first;   // 열 좌표
        int y = q.front().first.second;  // 행 좌표
        int c = q.front().second;        // 현재 시간

        if (space[y][x] > 0 && space[y][x] < shsize && tmp == c) {  // 같은 크기의 물고기가 같은 시간이 걸리는 거리에 있을 때
            if ((sy > y) || (sy == y && sx > x)) {                  // 위쪽에 있는 물고기 or 왼쪽에 있는 물고기가 있으면
                sy = y;                                             // 물고기 먹은 상어 위치 저장
                sx = x;
            }
        }
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && ny >= 0 && nx < n && ny < n && !visit[ny][nx]) {     // 범위 내에 있고 방문 하지 않았을 때
                if (space[ny][nx] <= shsize) {                                  // 상어 크기보다 작거나 같을 때
                    if (space[ny][nx] > 0 && space[ny][nx] < shsize && !ate) {  // 먹을 수 있는 물고기이고 먹지 않았다면
                        ate = true;                                             // 먹었다고 표시
                        sx = nx;                                                // 시작 위치를 물고기 먹었던 위치로 변경
                        sy = ny;
                        tmp = c + 1;                // 한 마리 먹는데 걸린 시간
                        anstime += tmp;             // 최종 시간에 누적
                    } else {                        // 먹지 못한 경우
                        q.push({{nx, ny}, c + 1});  // 걸린 시간 증가 후 큐에 삽입
                        visit[ny][nx] = true;       // 방문 처리
                    }
                }
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;  // 공간의 크기
    cin >> n;
    for (int i = 0; i < n; i++) {  // 입력
        for (int j = 0; j < n; j++) {
            cin >> space[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (space[i][j] == 9) {  // 상어 위치에 도착하면
                sy = i;              // 좌표 저장
                sx = j;
                space[i][j] = 0;  // 상어 위치 삭제
            }
        }
    }
    while (!help) {  // 도움 요청 전까지 반복
        bool visit[21][21] = {false};
        BFS(n, sx, sy, visit, ssize);  // 탐색 시작
        if (ate) {                     // 물고기 먹었다면
            ate = false;
            cnt += 1;            // 물고기 먹은 횟수 1 증가
            space[sy][sx] = 0;   // 물고기 위치 삭제
            if (cnt == ssize) {  // 횟수와 상어 크기가 같다면
                ssize += 1;      // 상어 크기 증가
                cnt = 0;         // 횟수 초기화
            }
        } else {
            help = true;  // 엄마 상어에게 도움 요청
        }
    }
    cout << anstime;
}