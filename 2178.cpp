#include <iostream>
#include <string>
#include <queue>
using namespace std;

int map[101][101];
int visited[101][101] = { 0, };
int dis[101][101] = { 0, };
int n, m;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

void BFS(int a, int b){
	visited[a][b] = 1;
	queue<pair<int, int>>q;
	q.push({a,b});
	dis[a][b]++;
	while (!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)	{
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (0 <= nx && nx < n && 0 <= ny && ny < m&& map[nx][ny] == 1 && !visited[nx][ny]){
				dis[nx][ny] = dis[x][y] + 1;
				visited[nx][ny] = 1;
				q.push({nx,ny});
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	string str;

	for (int i = 0; i < n; i++){
		cin >> str;
		for (int j = 0; j < m; j++) {
			map[i][j] = str[j] - '0';
		}
	}
	BFS(0, 0);
	cout << dis[n - 1][m - 1];
}