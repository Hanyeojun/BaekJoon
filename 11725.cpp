// 트리의 부모 찾기
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n;
int arr[100001];
bool visit[100001];
vector<int> v[100001];
queue<int> q;

void BFS() {
    q.push(1);  // 루트 노드가 1이므로 1 push
    visit[1] = 1;

    while (!q.empty()) {
        int pnt = q.front();  // 부모 노드
        q.pop();

        for (int i = 0; i < v[pnt].size(); i++) {  // 연결된 노드만큼 반복
            int chl = v[pnt][i];                   // 자식 노드

            if (!visit[chl]) {   // 방문하지 않았을 때
                arr[chl] = pnt;  // 부모 노드값 저장
                visit[chl] = 1;  // 방문 처리
                q.push(chl);     // 자식 노드로 내려감
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    BFS();

    for (int i = 2; i <= n; i++) {
        cout << arr[i] << '\n';
    }
}