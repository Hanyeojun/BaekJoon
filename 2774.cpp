#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    string str;
    while (t--) {
        cin >> str;
        int cnt1 = 0, cnt2 = 0, arr[10] = {0};
        for (int i = 0; i < str.length(); i++) {
            cnt1 = str[i] - '0';
            arr[cnt1]++;
        }
        for (int i = 0; i <= 9; i++) {
            if (arr[i] != 0) {
                cnt2++;
            }
        }
        cout << cnt2 << '\n';
    }
}