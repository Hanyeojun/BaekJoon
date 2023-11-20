#include <cmath>
#include <iostream>
using namespace std;
int main() {
    double r, w, l;
    int cnt = 1;
    while (1) {
        cin >> r >> w >> l;
        if (r == 0) break;
        cout << "Pizza " << cnt;
        if ((2 * r) >= sqrt(w * w + l * l)) {
            cout << " fits on the table." << '\n';
        } else
            cout << " does not fit on the table." << '\n';
        cnt++;
    }
}