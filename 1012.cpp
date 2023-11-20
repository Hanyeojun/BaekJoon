#include<iostream>
using namespace std;
int m, n, k; //가로, 세로, 배추 개수
int arr[51][51] = { 0 }; //배추 심은 위치 저장
bool visit[51][51] = {}; //방문 확인
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

void DFS(int y, int x) {
	visit[y][x] = 1; //방문했으므로 1
	for (int i = 0; i < 4; i++) { //좌표만큼 돌면서
		int nextx = x + dx[i];
		int nexty = y + dy[i];
		if (arr[nexty][nextx] == 1 && visit[nexty][nextx] == false) { //반복돌면서 1이면서 방문하지않았다면
			DFS(nexty, nextx); //재귀
		}
	}
}

void reset() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			visit[i][j] = false;
		}
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> m >> n >> k;
		reset();
		while (k--) { //배추 위치
			int a, b;
			cin >> a >> b;
			arr[b][a] = 1;
		}
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j] == 1 && visit[i][j] == false) {
					DFS(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << '\n';
	}
}