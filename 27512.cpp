#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    int game = n * m;
    if (game % 2 == 1) {
        cout << game - 1;
    } else
        cout << game;
}