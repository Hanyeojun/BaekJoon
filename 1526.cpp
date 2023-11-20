#include <iostream>
using namespace std;
int main() {
    int n, tmp, flag;
    cin >> n;
    for (int i = n; i >= 0; i--) {
        tmp = i;
        flag = 1;
        while (tmp != 0) {
            if (tmp % 10 != 4 && tmp % 10 != 7) {
                flag = 0;
                break;
            } else
                tmp /= 10;
        }
        if (flag == 1) {
            cout << i << endl;
            break;
        }
    }
}