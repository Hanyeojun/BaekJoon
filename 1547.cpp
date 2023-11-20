#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    int x, y, idx = -1;
    int arr[4] = {0, 1, 0, 0};

    while (t--) {
        int tmp;
        cin >> x >> y;
        tmp = arr[x];
        arr[x] = arr[y];
        arr[y] = tmp;
        for (int i = 1; i < 4; i++) {
            if (arr[i] == 1) {
                idx = i;
            }
        }
    }
    cout << idx;
}