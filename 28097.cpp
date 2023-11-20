#include <iostream>
using namespace std;
int main() {
    int n, t, day = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        day += t;
    }
    day += (n - 1) * 8;
    cout << day / 24 << " " << day % 24;
}