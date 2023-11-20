#include <iostream>
using namespace std;
int main() {
    int t, minx = 10001, miny = 10001, maxx = -10001, maxy = -10001;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
        minx = min(minx, x);
        miny = min(miny, y);
        maxx = max(maxx, x);
        maxy = max(maxy, y);
    }
    cout << (maxx - minx) * (maxy - miny);
}