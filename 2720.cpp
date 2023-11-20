#include <iostream>
using namespace std;
int main() {
    int t, money;
    cin >> t;
    while (t--) {
        cin >> money;
        int Q, D, N, P;
        Q = money / 25;
        money %= 25;
        D = money / 10;
        money %= 10;
        N = money / 5;
        P = money % 5;
        cout << Q << ' ' << D << ' ' << N << ' ' << P << '\n';
    }
}