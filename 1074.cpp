// Z. 분할정복
// 순서대로 번호를 매겨서 배열에 따로 저장 후 해당 행,열의 번호 출력
#include <cmath>
#include <iostream>
using namespace std;
int n, r, c, cnt;
void DnC(int y, int x, int sz) {
    if (y == r && x == c) {  // 원하는 좌표를 찾으면
        cout << cnt;
        return;
    }
    if (r < y + sz && r >= y && c < x + sz && c >= x) {  // 원하는 좌표가 현재 사분면에 있을 때
        DnC(y, x, sz / 2);                               // 좌상단
        DnC(y, x + sz / 2, sz / 2);                      // 우상단
        DnC(y + sz / 2, x, sz / 2);                      // 좌하단
        DnC(y + sz / 2, x + sz / 2, sz / 2);             // 우하단
    } else {
        cnt += pow(sz, 2);
    }
}
int main() {
    cin >> n >> r >> c;
    int asize = pow(2, n);
    DnC(0, 0, asize);
}