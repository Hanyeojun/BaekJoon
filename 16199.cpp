#include <iostream>
using namespace std;
int main() {
    int d1, m1, y1, d2, m2, y2;
    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;

    int r1, r2, r3;

    if (m1 < m2)
        r1 = y2 - y1;
    else if (m1 == m2 && d1 <= d2)
        r1 = y2 - y1;
    else
        r1 = y2 - y1 - 1;
    r2 = y2 - y1 + 1;
    r3 = y2 - y1;
    cout << r1 << '\n' << r2 << '\n' << r3;
}