#include <iostream>
using namespace std;
char image[101][101];
char in[10] = {'.', 'O', '|', '-', '/', '\\', '^', '<', 'v', '>'};
char out[10] = {'.', 'O', '-', '|', '\\', '/', '<', 'v', '>', '^'};
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> image[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < 10; k++) {
                if (image[i][j] == in[k]) {
                    image[i][j] = out[k];
                    break;
                }
            }
        }
    }
    for (int i = m - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            cout << image[j][i];
        }
        cout << '\n';
    }
}