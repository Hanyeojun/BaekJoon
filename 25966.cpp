#include <ios>
#include <iostream>
#include "string.h"
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int n, m, q, x, y, z, qur;
  cin >> n >> m >> q;
  int **arr = new int *[n];

  for (int i = 0; i <= n; i++) {
    arr[i] = new int[m];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  while (q--) {
    cin >> qur;
    if (qur == 0) {
      cin >> x >> y >> z;
      arr[x][y] = z;
    }
    else if (qur == 1) {
      cin >> x >> y;
      int *t;
      t = arr[x];
      arr[x] = arr[y];
      arr[y] = t;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << arr[i][j] << " ";
    }
    cout << '\n';
  }
}