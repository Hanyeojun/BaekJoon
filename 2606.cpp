#include<iostream>
using namespace std;
int com[101][101];
bool visit[101];
int cnt = -1, n, m;
void DFS(int x) {
	visit[x] = true;
	cnt++;
	for (int i = 1; i <= m; i++) {
		if (visit[i] == false && com[x][i]) { //방문한 적 없고 경로가 있다면
			DFS(i);
		}
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> m >> n;
	int a, b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		com[a][b] = 1;
		com[b][a] = 1;
	}
	DFS(1); //1에서 감염된 컴퓨터만 찾으면 되므로 1에서부터만 탐색
	cout << cnt;
}