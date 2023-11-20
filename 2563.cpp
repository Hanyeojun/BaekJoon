#include <iostream>
using namespace std;
int main() {
    int arr[100][100] = { 0 };
    int t, x, y, cnt = 0;
    cin >> t;

    while (t--) {
        cin >> x >> y;
        for (int i = y; i < y + 10; i++) {
            for (int j = x; j < x + 10; j++) {
                arr[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (arr[i][j] == 1) cnt++;
        }
    }
    cout << cnt;
}