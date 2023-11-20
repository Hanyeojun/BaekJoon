#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    int ps2 = sum * sum;
    int ps3 = 0;
    for (int i = 0; i <= n; i++) {
        int tmp = i * i * i;
        ps3 += tmp;
    }
    cout << sum << '\n' << ps2 << '\n' << ps3;
}