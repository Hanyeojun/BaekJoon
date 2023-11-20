// 캥거루 세마리
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int tmp1 = abs(b - a - 1);
    int tmp2 = abs(c - b - 1);
    cout << max(tmp1, tmp2);
}