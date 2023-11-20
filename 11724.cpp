#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> v[1001];
int visit[1001];
queue<int> q;

void BFS(int tmp)
{
    visit[tmp] = 1;
    q.push(tmp);
    while (!q.empty())
    {
        int now = q.front();
        q.pop();
        for (int i = 0; i < v[now].size(); i++)
        {
            int next = v[now][i];
            if (!visit[next])
            {
                visit[next] = 1;
                q.push(next);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++) // 간선 개수만큼 반복
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y); // 연결
        v[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    { // 정점 개수만큼 반복
        if (!visit[i])
        {
            BFS(i);
            cnt++; // queue 하나가 끝나면 연결 요소가 1 증가
        }
    }
    cout << cnt;
}