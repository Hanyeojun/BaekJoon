// 색종이 만들기
// 분할정복, 재귀 알고리즘
#include <iostream>
using namespace std;
int white, blue;
int paper[128][128] = {-1};
void Cutting(int y, int x, int sz) {
    int color = paper[y][x];
    for (int i = y; i < y + sz; i++) {
        for (int j = x; j < x + sz; j++) {
            if (paper[i][j] != color) color = 2;
            if (color == 2) {
                Cutting(y, x, sz / 2);                    // 좌상단
                Cutting(y, x + sz / 2, sz / 2);           // 우상단
                Cutting(y + sz / 2, x, sz / 2);           // 좌하단
                Cutting(y + sz / 2, x + sz / 2, sz / 2);  // 우하단
                return;
            }
        }
    }
    if (color == 1)
        blue++;
    else
        white++;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> paper[i][j];
        }
    }
    Cutting(0, 0, n);
    cout << white << '\n' << blue;
}