#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> mapp[200000];
int visit[200000];
int res[200000];
int cnt = 0;

void bfs(int r)
{
    queue<int> q;
    q.push(r);    // 큐에 노드 삽입
    visit[r] = 1; // 방문 체크
    cnt++;        // 방문한 노드 카운트 +1
    res[r] = cnt;
    while (!q.empty())
    {
        int fst = q.front();
        q.pop();
        for (int i = 0; i < mapp[fst].size(); i++)
        {
            int tmp = mapp[fst][i];
            if (!visit[tmp]) // 방문하지 않은 곳이라면
            {
                cnt++;
                res[tmp] = cnt;
                q.push(tmp);
                visit[tmp] = 1;
            }
        }
    }
}

int main()
{
    int n, m, r;
    cin >> n >> m >> r;
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        mapp[x].push_back(y); // 양방향
        mapp[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        sort(mapp[i].begin(), mapp[i].end(), greater<int>());
    }
    bfs(r);
    for (int i = 1; i <= n; i++)
    {
        cout << res[i] << '\n';
    }
}