#include <iostream>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    int sum = x + y, sub = x - y;
    int a = sum / 2;
    int b = sub / 2;

    if (sum % 2 != 0 || sub % 2 != 0)
        cout << -1 << '\n';
    else {
        if (a >= 0 && b >= 0) {
            if (a >= b) {
                cout << a << ' ' << b << '\n';
            } else {
                cout << b << ' ' << a << '\n';
            }
        } else {
            cout << -1 << '\n';
        }
    }
}