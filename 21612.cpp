#include <iostream>
using namespace std;
int main() {
    int b;
    cin >> b;
    int p = 5 * b - 400;
    cout << p;
    if (p < 100)
        cout << '\n' << 1;
    else if (p == 100)
        cout << '\n' << 0;
    else
        cout << '\n' << -1;
}