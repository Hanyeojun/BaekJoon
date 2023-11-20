#include <iostream>
using namespace std;
char room[101][101];  // 방
int main() {
    string str;
    int rowc = 0, colc = 0, n, cnt = 0;  // 가로cnt, 세로cnt, 방 크기, 칸 cnt
    cin >> n;
    // 가로
    for (int i = 0; i < n; i++) {
        cin >> str;
        cnt = 0;
        for (int j = 0; j < n; j++) {
            room[i][j] = str[j];
            if (room[i][j] == '.')
                cnt++;                 // 칸 증가
            else {                     // 짐 만났을 때
                if (cnt >= 2) rowc++;  // 칸이 2 이상이면 가로cnt 증가
                cnt = 0;               // 칸 개수 초기화
            }
        }
        if (cnt >= 2) rowc++;  // 벽 만났을 때 칸 2 이상이면 가로 cnt 증가
    }
    // 세로
    for (int i = 0; i < n; i++) {
        cnt = 0;
        for (int j = 0; j < n; j++) {
            if (room[j][i] == '.')
                cnt++;                 // 세로이므로 room[j][i]
            else {                     // 짐 만났을 때
                if (cnt >= 2) colc++;  // 세로 cnt 증가
                cnt = 0;
            }
        }
        if (cnt >= 2) colc++;  // 벽 만났을 때
    }
    cout << rowc << " " << colc;
}