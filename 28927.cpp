#include <iostream>
using namespace std;
int main() {
    int t[2], e[2], f[2];
    for (int i = 0; i < 2; i++) {
        cin >> t[i] >> e[i] >> f[i];
    }
    int Max = t[0] * 3 + e[0] * 20 + f[0] * 120;
    int Mel = t[1] * 3 + e[1] * 20 + f[1] * 120;
    if (Max > Mel)
        cout << "Max";
    else if (Max < Mel)
        cout << "Mel";
    else
        cout << "Draw";
}