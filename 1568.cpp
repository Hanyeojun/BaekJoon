#include <iostream>
using namespace std;
int main() {
    int n, k = 0, t = 0;
    cin >> n;

    while (1) {
        k++;
        if (n == 0) break;
        if (n < k) k = 1;
        n -= k;
        t++;
    }
    cout << t;
}