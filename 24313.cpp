#include <iostream>
using namespace std;
int main() {
    int a1, a0, c, n;
    cin >> a1 >> a0 >> c >> n;
    int f, g;
    f = a1 * n + a0;
    g = c * n;
    if ((f <= g) && (c - a1 >= 0))
        cout << 1;
    else
        cout << 0;
}