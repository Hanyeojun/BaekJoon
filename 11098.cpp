#include <iostream>
using namespace std;
int main() {
    int n, p;
    cin >> n;
    while (n--) {
        cin >> p;
        int a, maxx = 0;
        string str, res;
        for (int i = 0; i < p; i++) {
            cin >> a >> str;
            if (a > maxx) {
                maxx = a;
                res = str;
            }
        }
        cout << res << '\n';
    }
}