#include <cmath>
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    if (n <= 2) {
        cout << 4;
    } else if (n > 3 && n <= 1000000) {
        cout << n * 2;
    } else {
        cout << 1000000000;
    }
}