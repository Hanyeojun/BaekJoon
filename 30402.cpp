#include <algorithm>
#include <cstring>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
char cat[16][16];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            cin >> cat[i][j];
        }
    }
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (cat[i][j] == 'w') {
                cout << "chunbae";
                return 0;
            } else if (cat[i][j] == 'b') {
                cout << "nabi";
                return 0;
            } else if (cat[i][j] == 'g') {
                cout << "yeongcheol";
                return 0;
            }
        }
    }
}