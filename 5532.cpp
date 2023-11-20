#include <iostream>
using namespace std;
int main() {
    int l, b, a, c, d;  // 방학 일수, 수학 총 p, 국어 총 p, 국어 최대 p, 수학 최대 p
    cin >> l >> a >> b >> c >> d;
    int kday, mday;
    if (a % c == 0) {
        kday = a / c;
    } else {
        kday = a / c + 1;
    }
    if (b % d == 0) {
        mday = b / d;
    } else {
        mday = b / d + 1;
    }
    cout << l - max(kday, mday);
}