// 종이의 개수
#include <cmath>
#include <iostream>
using namespace std;
int mone, zero, one;  //-1, 0, 1
int arr[2187][2187];
// 분할정복, 재귀
void DnC(int y, int x, int sz) {
    int present = arr[y][x];
    for (int i = y; i < y + sz; i++) {
        for (int j = x; j < x + sz; j++) {
            if (arr[i][j] != present) present = 2;
            if (present == 2) {
                // 상
                DnC(y, x, sz / 3);               // 왼쪽
                DnC(y, x + sz / 3, sz / 3);      // 가운데
                DnC(y, x + sz / 3 * 2, sz / 3);  // 오른쪽
                // 중
                DnC(y + sz / 3, x, sz / 3);               // 왼쪽
                DnC(y + sz / 3, x + sz / 3, sz / 3);      // 가운데
                DnC(y + sz / 3, x + sz / 3 * 2, sz / 3);  // 오른쪽
                // 하
                DnC(y + sz / 3 * 2, x, sz / 3);               // 왼쪽
                DnC(y + sz / 3 * 2, x + sz / 3, sz / 3);      // 가운데
                DnC(y + sz / 3 * 2, x + sz / 3 * 2, sz / 3);  // 오른쪽
                return;
            }
        }
    }
    if (present == -1)
        mone++;
    else if (present == 0)
        zero++;
    else
        one++;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    DnC(0, 0, n);
    cout << mone << '\n' << zero << '\n' << one;
}