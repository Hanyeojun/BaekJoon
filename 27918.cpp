#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, dg = 0, pns = 0;
    char win;
    cin >> n;
    while (n--) {
        cin >> win;
        if (win == 'D')
            dg++;
        else
            pns++;
        if (abs(dg - pns) == 2) break;
    }
    cout << dg << ':' << pns;
}