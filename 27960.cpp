#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, sum = 0;
    int score[10] = {512, 256, 128, 64, 32, 16, 8, 4, 2, 1};

    bool aflag[10] = {false};
    bool bflag[10] = {false};

    cin >> a >> b;

    for (int i = 0; i < 10; i++) {
        if (a >= score[i]) {
            a -= score[i];
            aflag[i] = true;
        }
        if (b >= score[i]) {
            b -= score[i];
            bflag[i] = true;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (aflag[i] != bflag[i]) {
            sum += score[i];
        }
    }
    cout << sum;
}