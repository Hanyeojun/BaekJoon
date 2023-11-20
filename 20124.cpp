#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string maxstr = "", str;
    int maxn = -1, num = 0;
    while (n--) {
        cin >> str >> num;
        if (num > maxn || (num == maxn && str < maxstr)) {
            maxn = num;
            maxstr = str;
        }
    }
    cout << maxstr;
}