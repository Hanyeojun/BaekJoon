#include <iostream>
#include <queue>
#include <utility>
#include <cstring>
using namespace std;

int mapp[51][51];
int visit[51][51];
int dx[8] = {0, 0, -1, 1, -1, 1, -1, 1};
int dy[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
int w, h, cnt;
queue<pair<int, int>> q;

void BFS(int x, int y)
{
    visit[x][y] = 1;
    q.push({x, y});
    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && ny >= 0 && nx < h && ny < w && !visit[nx][ny] && mapp[nx][ny])
            {
                visit[nx][ny] = 1;
                q.push({nx, ny});
            }
        }
    }
}

int main()
{
    while (1)
    {
        cin >> w >> h;
        if (!w && !h)
            break;
        cnt = 0;
        memset(mapp, 0, sizeof(mapp));
        memset(visit, 0, sizeof(visit));
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cin >> mapp[i][j];
            }
        }
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if (!visit[i][j] && mapp[i][j])
                {
                    BFS(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
}