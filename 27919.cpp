#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string mascot;
    cin >> mascot;
    int uc = 0, dp = 0;
    for (int i = 0; i < mascot.length(); i++) {
        if (mascot[i] == 'U' || mascot[i] == 'C') {
            uc++;
        } else if (mascot[i] == 'D' || mascot[i] == 'P') {
            dp++;
        }
    }
    if (uc > (dp + 1) / 2) {
        cout << 'U';
    }
    if (dp > 0) {
        cout << "DP";
    }
}