#include<iostream>
#include<algorithm>
using namespace std;
string bc[8] = { "BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB" };
string wc[8] = { "WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW" ,"WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW" };
string input[51] = {};
int n, m;

int Black(int y, int x) {
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (input[i + y][j + x] != bc[i][j]) cnt++;
        }
    }
    return cnt;
}

int White(int y, int x) {
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (input[i + y][j + x] != wc[i][j]) cnt++;
        }
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int result = 64;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    for (int i = 0; i + 7 < n; i++) {
        for (int j = 0; j + 7 < m; j++) {
            if (result > min(Black(i, j), White(i, j))) result = min(Black(i, j), White(i, j));
        }
    }
    cout << result;
}

//코드2
/*
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, row = 0, col = 0, c1 = 0, c2 = 0, mn = 64;
    char chess[9][9] = { "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB" };

    cin >> n >> m;
    char** board = new char* [n];
    for (int i = 0; i < n; i++) board[i] = new char[m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }
    while (n - row >= 8) {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (chess[i][j] != board[row + i][col + j])
                    c1++;
                if (chess[i + 1][j] != board[row + i][col + j])
                    c2++;
            }
        }
        if (c1 > c2)
            c1 = c2;
        if (mn > c1)
            mn = c1;

        c1 = 0;
        c2 = 0;
        col++;
        if (m - col == 7) {
            row++;
            col = 0;
        }
    }
    cout << mn << '\n';
}
*/