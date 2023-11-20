#include <iostream>
using namespace std;
int main() {
    int k, n, m;
    cin >> k >> n >> m;
    if (m - k * n >= 0)
        cout << 0;
    else
        cout << -(m - k * n);
}