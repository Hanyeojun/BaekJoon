#include <iostream>
using namespace std;
int main() {
    int d, h, m;
    cin >> d >> h >> m;

    int tm = 11 + 11 * 60 + 11 * 1440;
    int ans = m + h * 60 + d * 1440 - tm;

    cout << (ans < 0 ? -1 : ans);
}