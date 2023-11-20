// 쿼드트리
// 분할정복, 재귀 알고리즘
// 같은 숫자 묶음으로만 묶일 때까지 균일하게 4등분함
// 왼쪽 위, 오른쪽 위, 왼쪽 아래, 오른쪽 아래순으로 표기하며 깊어질 때마다 괄호 추가됨
#include <iostream>
using namespace std;
int src[64][64] = {-1};

void Cutting(int y, int x, int sz) {
    int color = src[y][x];
    for (int i = y; i < y + sz; i++) {
        for (int j = x; j < x + sz; j++) {
            if (src[i][j] != color) color = 2;  // 다른 색상이 있다면 재귀를 위해 2 설정
            if (color == 2) {
                cout << '(';
                Cutting(y, x, sz / 2);                    // 좌상단
                Cutting(y, x + sz / 2, sz / 2);           // 우상단
                Cutting(y + sz / 2, x, sz / 2);           // 좌하단
                Cutting(y + sz / 2, x + sz / 2, sz / 2);  // 우하단
                cout << ')';
                return;
            }
        }
    }
    if (color == 0)
        cout << 0;
    else
        cout << 1;
}

int main() {
    int n;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        for (int j = 0; j < str.length(); j++) {
            src[i][j] = str[j] - '0';
        }
    }
    Cutting(0, 0, n);
}