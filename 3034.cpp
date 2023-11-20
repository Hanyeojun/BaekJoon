#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int n, w, h;
    cin >> n >> w >> h;
    while (n--) {
        int t;
        cin >> t;
        if (w * w + h * h >= t * t) {
            cout << "DA" << '\n';
        } else {
            cout << "NE" << '\n';
        }
    }
}