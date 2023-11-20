#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc, s, n, q, p, sum = 0;
    cin >> tc;
    while(tc--) {
        cin >> s >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> q >> p;
            sum += p * q;
        }
        cout << sum + s << '\n';
        sum = 0;
    }
}