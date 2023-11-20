// 하키
#include <iostream>
using namespace std;
int calD(int x, int y, int a, int b) {
    int dist = ((x - a) * (x - a)) + ((b - y) * (b - y));
    return dist;
}

int main() {
    int w, h, x, y, p, cnt = 0;
    cin >> w >> h >> x >> y >> p;

    while (p--) {
        int a, b, r = (h / 2) * (h / 2);
        cin >> a >> b;

        if (x <= a && a <= x + w && y <= b && b <= y + h) {
            cnt++;
        } else if (calD(x, y + (h / 2), a, b) <= r) {
            cnt++;
        } else if (calD(x + w, y + (h / 2), a, b) <= r) {
            cnt++;
        }
    }
    cout << cnt;
}