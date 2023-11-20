// N-Queen
#include <iostream>
using namespace std;
int n;         // 입력값
int cnt;       // 경우의 수
int loct[15];  // queen 위치 저장

// queen을 놓을 수 있는지 판단
bool Check(int row, int col) {  // 행, 열
    for (int i = 0; i < row; i++) {
        if (loct[i] == col) {  // 같은 열에 queen이 놓였다면
            return false;
        } else if (loct[i] == col - (row - i)) {  // 왼쪽 대각선에 queen이 놓였다면
            return false;
        } else if (loct[i] == col + (row - i)) {  // 오른쪽 대각선에 queen이 놓였다면
            return false;
        }
    }
    return true;
}

// Backtracking
void Nqueen(int row) {
    if (row == n) {  // 탐색이 완료되고 경우의 수 찾았다면 cnt 증가
        cnt++;
        return;  // 함수 종료
    }
    for (int col = 0; col < n; col++) {  // 현재 행의 열 탐색
        if (Check(row, col)) {           // 탐색한 결과가 참이면 => queen을 놓을 수 있다면
            loct[row] = col;             // 행 위치에 열 값 저장
            Nqueen(row + 1);             // 다음 행 검사
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;   // 체스판 크기 입력
    Nqueen(0);  // 0번째 행부터 탐색 시작
    cout << cnt;
}