#include <iostream>
using namespace std;
int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int res = min(m, k) + min(n - m, n - k);
    cout << res;
}