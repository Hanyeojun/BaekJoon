// 빗물
#include <iostream>
using namespace std;
int main() {
    int w, h, ans = 0;
    cin >> h >> w;
    int space[500] = {0};

    for (int i = 0; i < w; i++) {
        cin >> space[i];
    }

    for (int i = 1; i < w - 1; i++) {
        int left = 0, right = 0;

        for (int j = 0; j < i; j++) {
            if (space[i] < space[j]) {
                left = max(left, space[j]);
            }
        }

        for (int j = i + 1; j < w; j++) {
            if (space[i] < space[j]) {
                right = max(right, space[j]);
            }
        }

        if (left > 0 && right > 0) {
            ans += min(left, right) - space[i];
        }
    }

    cout << ans;
}