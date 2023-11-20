#include <iostream>
using namespace std;
int main() {
    string org;
    int t, cnt = 0;
    cin >> org >> t;
    while (t--) {
        string tmp;
        cin >> tmp;
        if (org == tmp) cnt++;
    }
    cout << cnt;
}