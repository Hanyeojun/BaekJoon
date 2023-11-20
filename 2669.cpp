#include <iostream>
using namespace std;
int rect[101][101];
int main() {
    int a, b, c, d;
    int area = 0;
    for (int i = 0; i < 4; i++) {
        cin >> a >> b >> c >> d;
        for (int y = b; y < d; y++) {
            for (int x = a; x < c; x++) {
                if (rect[y][x] == 0) {
                    area++;
                    rect[y][x] = 1;
                }
            }
        }
    }
    cout << area;
}