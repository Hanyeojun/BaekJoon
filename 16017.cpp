#include <iostream>
using namespace std;
int main() {
    int n[4] = {0};
    for (int i = 0; i < 4; i++) {
        cin >> n[i];
    }
    if (n[0] >= 8 && n[1] == n[2] && n[3] >= 8)
        cout << "ignore";
    else
        cout << "answer";
}