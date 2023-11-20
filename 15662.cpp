#include <iostream>
#include <vector>
#include <deque>
#include <string.h>
using namespace std;
vector<deque<int>> dq(1001);
bool visit[1001];      //방문 확인
int decide_dir[1001]; //회전시킬 방향 저장
int t, k, wheel_n, direct1, sum = 0, cnt = 0;//톱니바퀴 개수, 회전 횟수, 톱니바퀴 번호, 방향(0, 1, -1), count
char str;
void check_rotate(int w, int d) { //톱니번호, 돌릴 방향
    visit[w] = 1;
    decide_dir[w] = d;

    if (w - 1 > 0 && visit[w - 1] == 0) { //왼쪽
        if (d == 0) check_rotate(w - 1, 0);
        else if (dq[w][6] != dq[w - 1][2]) check_rotate(w - 1, -d);
        else check_rotate(w - 1, 0);
    }

    if (w + 1 <= t && visit[w + 1] == 0) { //오른쪽
        if (d == 0)
            check_rotate(w + 1, 0);
        else if (dq[w][2] != dq[w + 1][6])
            check_rotate(w + 1, -d);
        else
            check_rotate(w + 1, 0);
    }
}

void rotating() {
    for (int i = 1; i <= t; i++) {
        if (decide_dir[i] == -1) { //반시계
            int tmp = dq[i].front();
            dq[i].pop_front();
            dq[i].push_back(tmp);
        }
        else if (decide_dir[i] == 1) { //시계
            int tmp = dq[i].back();
            dq[i].pop_back();
            dq[i].push_front(tmp);
        }
        else if (decide_dir[i] == 0)
            continue; //회전 x
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    for (int i = 1; i <= t; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> str;
            dq[i].push_back(str - '0'); //입력값 숫자로 변환 후 deque에 저장
        }
    }

    cin >> k;

    for (int i = 0; i < k; i++) {
        cin >> wheel_n >> direct1; //돌릴 톱니바퀴 번호와 방향 입력
        memset(visit, 0, sizeof(visit)); //초기화
        check_rotate(wheel_n, direct1);
        rotating();
    }

    for (int i = 1; i <= t; i++) {
        if (dq[i][0] == 1) {
            cnt++;
        }
    }
    cout << cnt;
}