#include <iostream>
using namespace std;
int main() {
    int n, a, b;
    cin >> n >> a >> b;

    if (b < n) {
        cout << "Bus";
    } else {
        if (a < (n + abs(b - n))) {
            cout << "Bus";
        } else if (a > (n + abs(b - n))) {
            cout << "Subway";
        } else {
            cout << "Anything";
        }
    }
}