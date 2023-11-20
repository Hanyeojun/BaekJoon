#include<iostream>
using namespace std;
int main() {
    int tc, h, w, n, result;
    cin >> tc;
    while (tc--) {
        cin >> h >> w >> n;
        if (n % h == 0) {
            result = (h * 100) + (n / h);
        }
        else {
            result = ((n % h) * 100) + ((n / h) + 1);
        }
        cout << result << endl;
    }
}