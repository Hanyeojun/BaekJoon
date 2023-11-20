#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
void BFS(int x, int y);
int n, cnt = 0; //정사각형의 크기 n, 단지 내 집의 수 cnt
string str[26]; //입력되는 문자열
bool visit[26][26] = {}; //방문 유무 판단
int dx[4] = { 1,-1,0,0 }; //dx[0],dy[0] => (1,0), dx[1],dy[1] => (-1,0), dx[2],dy[2] => (0,1), dx[3],dy[3] => (0,-1)
int dy[4] = { 0,0,1,-1 };
vector<int> res; //벡터의 크기 = 단지의 수, 벡터의 인덱스는 단지 안에 있는 집의 수
queue<pair<int, int>>q;

void BFS(int x, int y) {
	q.push({ x,y }); //큐에 str의 위치값을 입력
	visit[x][y] = true; //해당 위치를 방문했으므로 true
	cnt++; //카운팅 조건에 맞으므로 카운트+1
	while (!q.empty()) { //큐에 값이 남아있을 때 = 방문하지 않은 노드가 있다는 뜻
		int nowx = q.front().first;
		int nowy = q.front().second;
		q.pop(); //첫번째 값 삭제
		for (int i = 0; i < 4; i++) { //dx, dy의 크기(4)만큼 반복
			int nextx = nowx + dx[i];
			int nexty = nowy + dy[i];
			//이동한 x,y가 범위 안에 속하고, 방문하지 않았으며 '1'인 경우
			if (nextx >= 0 && nexty >= 0 && nextx < n && nexty < n && visit[nextx][nexty] == false && str[nextx][nexty] == '1') {
				q.push({ nextx,nexty }); //큐에 저장
				visit[nextx][nexty] = true; //방문 처리
				cnt++; //단지 내 집의 수 카운트
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) cin >> str[i]; //입력
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (str[i][j] == '1' && visit[i][j] == false) { //입력이 1이고(집이 있음을 의미함) 방문하지 않았다면
				cnt = 0; //단지 개수는 0으로 초기화
				BFS(i, j); //해당 입력값 탐색
				res.push_back(cnt); //카운트된 집의 수를 벡터에 저장
			}
		}
	}
	sort(res.begin(), res.end()); //단지 내 집의 수가 적은 단지부터 출력하기 위해 정렬
	cout << res.size() << '\n'; //단지 수 출력
	for (int i = 0; i < res.size(); i++) cout << res[i] << '\n'; //단지 내 집의 수 출력
}