#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        int cnt1 = 0;
        int cnt2 = 0;
        cin >> n;
        while (n--) {
            char a, b;
            cin >> a >> b;
            if (a == 'R') {
                if (b == 'R') {
                    cnt1++;
                    cnt2++;
                } else if (b == 'P')
                    cnt2++;
                if (b == 'S') cnt1++;
            } else if (a == 'P') {
                if (b == 'R')
                    cnt1++;
                else if (b == 'P') {
                    cnt1++;
                    cnt2++;
                }
                if (b == 'S') cnt2++;
            } else if (a == 'S') {
                if (b == 'R')
                    cnt2++;
                else if (b == 'P')
                    cnt1++;
                if (b == 'S') {
                    cnt1++;
                    cnt2++;
                }
            }
        }
        if (cnt1 > cnt2)
            cout << "Player 1" << '\n';
        else if (cnt2 > cnt1)
            cout << "Player 2" << '\n';
        else
            cout << "TIE" << '\n';
    }
}