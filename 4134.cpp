// 다음 소수
#include <cmath>
#include <iostream>
using namespace std;

bool Pri(long long n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;  // 소수가 아닌 경우
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    long long n;
    bool flag = false;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n >= 0 && n <= 2)
            cout << 2 << '\n';
        else if (n == 3)
            cout << 3 << '\n';
        else {
            while (!Pri(n)) n++;
            cout << n << '\n';
        }
    }
}