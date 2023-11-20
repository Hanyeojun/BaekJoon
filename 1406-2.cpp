#include <iostream>
using namespace std;
// 편법 연결 리스트 사용한 구현
const int MX = 1000001;
char dat[MX];    // 원소 값
int pre[MX];     // 이전 노드 주소
int nxt[MX];     // 다음 노드 주소
int unused = 1;  // 새 원소 추가

void insert(int addr, char num) {
    dat[unused] = num;        // 새로운 원소 생성
    pre[unused] = addr;       // 새 원소의 pre 값에 삽입할 위치의 주소 대입
    nxt[unused] = nxt[addr];  // 새 원소의 nxt 값에 삽입할 위치의 nxt 값 대입
    if (nxt[addr] != -1) {
        pre[nxt[addr]] = unused;  // 삽입할 위치의 다음 원소의 pre값을 새 원소로 변경
    }
    nxt[addr] = unused;  // 삽입할 위치의 nxt 값을 새 원소로 변경
    unused++;            // 새 원소 증가
}

void erase(int addr) {
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

void traversal() {
    int cur = nxt[0];
    while (cur != -1) {
        cout << dat[cur];
        cur = nxt[cur];
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    fill(pre, pre + MX, -1);  //-1로 pre배열 초기화
    fill(nxt, nxt + MX, -1);  //-1로 nxt배열 초기화

    string str;
    cin >> str;
    int cursor = 0;
    for (auto ch : str) {
        insert(cursor, ch);
        cursor++;
    }
    int m;
    cin >> m;
    while (m--) {
        char od;
        cin >> od;
        if (od == 'L') {  // 커서 왼쪽 한 칸 이동
            if (pre[cursor] != -1) {
                cursor = pre[cursor];
            }
        } else if (od == 'D') {  // 커서 오른쪽 한 칸 이동
            if (nxt[cursor] != -1) {
                cursor = nxt[cursor];
            }
        } else if (od == 'B') {  // 커서 왼쪽 문자 삭제
            if (cursor != 0) {
                erase(cursor);
                cursor = pre[cursor];
            }
        } else if (od == 'P') {  // 커서 왼쪽에 문자 추가
            char in;
            cin >> in;
            insert(cursor, in);
            cursor = nxt[cursor];
        }
    }
    traversal();
}