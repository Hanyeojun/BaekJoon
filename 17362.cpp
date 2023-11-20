#include <iostream>
using namespace std;
int main() {
    int n, tmp = 0, res = 0;
    cin >> n;
    if (n < 6) {
        cout << n;
    } else {
        tmp = (n - 5) % 8;
        if (tmp <= 4) {
            res = 5 - tmp;
        } else {
            res = tmp - 3;
        }
        cout << res;
    }
}