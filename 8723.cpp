#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int len[3] = {0};
    bool flag1 = false, flag2 = false;
    for (int i = 0; i < 3; i++) cin >> len[i];
    sort(len, len + 3);
    if (len[0] == len[1] && len[1] == len[2]) flag1 = true;
    if (len[0] * len[0] + len[1] * len[1] == len[2] * len[2]) flag2 = true;
    if (!flag1 && !flag2)
        cout << 0;
    else if (!flag1 && flag2)
        cout << 1;
    else if (flag1 && !flag2)
        cout << 2;
}