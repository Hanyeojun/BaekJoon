#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, j, cnt = 0;
    cin >> n >> m;  // 전체 칸, 바구니 칸
    cin >> j;       // 사과 개수

    int start = 1, end = m;
    for (int i = 0; i < j; i++) {
        int t;
        cin >> t;
        while (1) {
            if (start <= t && t <= end) {
                break;
            } else if (start > t) {
                start--;
                end--;
                cnt++;
            } else if (t > end) {
                start++;
                end++;
                cnt++;
            }
        }
    }
    cout << cnt;
}