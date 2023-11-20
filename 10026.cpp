#include<iostream>
#include<queue>
#include<utility>
#include<cstring>
using namespace std;
int n, cnt1 = 0, cnt2 = 0;
string map[101];
int visit[101][101] = {0};
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
queue<pair<int, int>>q;

void BFS(int x, int y) {
	visit[x][y] = 1;
	q.push({ x,y });
	while (!q.empty()) {
		int nowx = q.front().first;
		int nowy = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nextx = nowx + dx[i];
			int nexty = nowy + dy[i];
			if (nextx >= 0 && nexty >= 0 && nextx < n && nexty < n && visit[nextx][nexty] == 0 && map[nowx][nowy] == map[nextx][nexty]) {
				q.push({ nextx,nexty });
				visit[nextx][nexty] = 1;
			}
		}

	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> map[i];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visit[i][j] == 0) {
				BFS(i, j);
				cnt1++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 'G') map[i][j] = 'R';
		}
	}
	memset(visit, 0, sizeof(visit));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visit[i][j] == 0) {
				BFS(i, j);
				cnt2++;
			}
		}
	}
	cout << cnt1 << " " << cnt2;
}