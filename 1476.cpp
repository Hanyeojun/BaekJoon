#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int e, s, m, cnt = 1;
    cin >> e >> s >> m;
    int tmpE = 1, tmpS = 1, tmpM = 1;
    while (1) {
      if ((cnt - e) % 15 == 0 && (cnt - s) % 28 == 0 && (cnt - m) % 19 == 0) {
        cout << cnt;
        break;
      }
      cnt++;
    }
    return 0;
}