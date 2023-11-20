#include <iostream>
using namespace std;
int main() {
    string n;
    while (1) {
        int cnt = 0;
        cin >> n;
        if (n == "0") return 0;
        for (int i = 0; i < n.length(); i++) {
            if (n[i] == '1')
                cnt += 2;
            else if (n[i] == '0')
                cnt += 4;
            else
                cnt += 3;
        }
        cnt += n.length() + 1;
        cout << cnt << '\n';
    }
}