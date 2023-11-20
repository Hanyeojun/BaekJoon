#include <iostream>
#include <queue>
using namespace std;

int n, m, v; //정점, 간선, 시작 정점
int mapp[1001][1001];
bool visit[1001];
queue<int> q;

void DFS(int v) {
  visit[v] = true;
  cout << v << " ";
  for (int i = 1; i <= n; i++) {
    if (mapp[v][i] == 1 && !visit[i]) {
      DFS(i);
    }
  }
}

void BFS(int v) {
  visit[v] = true;
  q.push(v);
  cout << v << " ";
  while (!q.empty()) {
    v = q.front();
    q.pop();
    for (int i = 1; i <= n; i++) {
      if (mapp[v][i] == 1 && !visit[i]) {
        q.push(i);
        visit[i] = true;
        cout << i << " ";
      }
    }
  }
}

void init() {
    for (int i = 1; i <= n; i++) {
    visit[i] = false;
  }
}

int main() {
  int x, y;
  cin >> n >> m >> v;
  for (int i = 0; i < m; i++) {
    cin >> x >> y;
    mapp[x][y] = 1; //양방향 간선이므로
    mapp[y][x] = 1; //양방향 연결
  }
  init();
  DFS(v);
  cout << '\n';
  init();
  BFS(v);
}