#include <iostream>
using namespace std;
int main() {
    int n, t, cnt = 0, ncnt = 0;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        if (n == 1) cnt++;
        else ncnt++;
    }
    if (cnt > ncnt) cout << "Junhee is cute!";
    else cout << "Junhee is not cute!";
}