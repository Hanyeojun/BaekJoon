#include <iostream>
using namespace std;
int main() {
    int a[11] = {0}, b[11] = {0};
    int awin = 0, bwin = 0;
    for (int i = 1; i < 11; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < 11; i++) {
        cin >> b[i];
    }
    for (int i = 1; i < 11; i++) {
        if (a[i] > b[i]) {
            awin++;
        } else if (b[i] > a[i]) {
            bwin++;
        } else
            continue;
    }
    if (awin > bwin)
        cout << 'A';
    else if (bwin > awin)
        cout << 'B';
    else
        cout << 'D';
}