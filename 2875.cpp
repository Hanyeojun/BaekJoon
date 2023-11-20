#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int tmp1 = min(n / 2, m);
    int tmp2 = (n + m - k) / 3;
    cout << min(tmp1, tmp2);
}