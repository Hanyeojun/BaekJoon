#include <iostream>
using namespace std;
int main() {
    long long r, c, n, x, y;
    cin >> r >> c >> n;
    if (r % n == 0)
        x = r / n;
    else
        x = r / n + 1;
    if (c % n == 0)
        y = c / n;
    else
        y = c / n + 1;
    cout << x * y;
}