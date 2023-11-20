#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    for (int i = 0; i < 3; i++) {
        int cnt = 1, maxx = 1;
        cin >> str;
        for (int i = 0; i < 7; i++) {
            if (str[i] == str[i + 1]) {
                cnt++;
                if (maxx < cnt) {
                    maxx = cnt;
                }
            } else
                cnt = 1;
        }
        cout << maxx << '\n';
    }
}