// 맥주 마시면서 걸어가기
#include <cstring>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

int n;                     // 편의점 개수
bool visit[101];           // 방문 확인
pair<int, int> home, dst;  // 집 좌표, 도착지 좌표

void BFS(int a, int b, vector<pair<int, int>> &v) {
    queue<pair<int, int>> q;
    q.push({a, b});

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if ((abs(x - dst.first) + abs(y - dst.second)) <= 1000) {  // 현재 거리와 도착지 거리가 1000m 이하면 (맥주 1병에 50m, 맥주 총 20병=1000m)
            cout << "happy\n";                                     // 도착할 수 있으므로 happy 출력 후 종료
            return;
        }
        for (int i = 0; i < n; i++) {                                    // 편의점 개수만큼 반복
            if ((abs(x - v[i].first) + abs(y - v[i].second)) <= 1000) {  // 20병으로 갈 수 있는 거리 안일 때
                if (!visit[i]) {                                         // 방문하지 않았을 때
                    visit[i] = true;                                     // 방문 처리
                    q.push({v[i].first, v[i].second});                   // 다음 편의점 좌표를 큐에 저장
                }
            }
        }
    }
    cout << "sad\n";  // 큐가 빌 때까지 함수가 끝나지 않으면 도착하지 못했다는 뜻으로 sad 출력
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<pair<int, int>> store;         // 편의점 좌표 저장
        memset(visit, false, sizeof(visit));  // visit 배열 초기화

        cin >> home.first >> home.second;
        for (int i = 0; i < n; i++) {
            int sx, sy;
            cin >> sx >> sy;
            store.push_back({sx, sy});
        }
        cin >> dst.first >> dst.second;

        BFS(home.first, home.second, store);
    }
}