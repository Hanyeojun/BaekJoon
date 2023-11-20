#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int d, m, days = 0;
    cin >> d >> m;
    days += d;
    m -= 1;
    while (m > 0) {
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
            days += 31;
            m -= 1;
        } else if (m == 2) {
            days += 28;
            m -= 1;
        } else if (m == 4 || m == 6 || m == 9 || m == 11) {
            days += 30;
            m -= 1;
        }
    }
    if (days % 7 == 1) {
        cout << "Thursday";
    } else if (days % 7 == 2) {
        cout << "Friday";
    } else if (days % 7 == 3) {
        cout << "Saturday";
    } else if (days % 7 == 4) {
        cout << "Sunday";
    } else if (days % 7 == 5) {
        cout << "Monday";
    } else if (days % 7 == 6) {
        cout << "Tuesday";
    } else if (days % 7 == 0) {
        cout << "Wednesday";
    }
}