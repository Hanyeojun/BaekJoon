#include "iostream"
#include "cmath"
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int ground[501][501]={0};
  // 세로, 가로, 인벤토리, ground최소, ground최대, 시간, 최소시간, 최대높이
  int n, m, b, minn = 1e9, maxx = -1e9, time = 0, mintime = 1e9, maxh = 0;
  cin >> n >> m >> b;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> ground[i][j];
      if (ground[i][j] < minn) {
        minn = ground[i][j]; //ground 안의 최솟값 구하기
      }
      if (ground[i][j] > maxx) {
        maxx = ground[i][j]; //ground 안의 최댓값 구하기
      }
    }
  }

  for (int k = minn; k <= maxx; k++) { //높이의 최소~최대범위까지 반복하면서 전체 경우의 수마다 걸리는 시간 계산
    int delto = 0, addto = 0; //삭제, 추가
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (ground[i][j]-k > 0) { //(현재 땅 높이 - k번째 높이)가 양수면
          delto += ground[i][j] - k; //인벤토리에 넣어야하므로 (현재 땅 높이 - k번째 높이)만큼 +delete
        }
        else { // (현재 땅 높이 - k번째 높이)가 양수가 아니면
          addto += abs(ground[i][j] - k); //추가해야하므로 (현재 땅 높이 - k번째 높이)의 절댓값만음 +addto
        }
      }
    }
    if (delto + b >= addto) { //삭제할 땅+인벤토리 >=추가할 땅이면
      time = delto * 2 + addto; //삭제할 땅 개수 *2초 + 추가할 땅 1초
      if (time <= mintime) { //최소 시간 구하기
        mintime = time; //최소시간
        maxh = k; //최대높이
      }
    }
  }
  cout << mintime << " " << maxh;
}