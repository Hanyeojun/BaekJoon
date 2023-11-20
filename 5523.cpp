#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, A = 0, B = 0;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        if (a > b)
            A++;
        else if (b > a)
            B++;
        else
            continue;
    }
    cout << A << ' ' << B;
}