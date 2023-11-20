// 방탈출
#include <iostream>
using namespace std;
int room[1000000];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> room[i];
    }
    for (int i = 0; i < n; i++) {
        if (room[i] == 1) {
            cnt++;
            if (room[i + 1] == 1) {
                room[i + 1] = 0;
            } else {
                room[i + 1] = 1;
            }
            if (room[i + 2] == 1) {
                room[i + 2] = 0;
            } else {
                room[i + 2] = 1;
            }
        }
    }
    cout << cnt;
}