#include <iostream>
using namespace std;
int main() {
    int n, k, s, y, room = 0;
    cin >> n >> k;
    int man[7] = {0}, woman[7] = {0};
    for (int i = 0; i < n; i++) {
        cin >> s >> y;
        if (s == 0)
            woman[y]++;
        else
            man[y]++;
    }
    for (int i = 1; i <= 6; i++) {
        if (man[i] % k == 0)
            room += man[i] / k;
        else
            room += man[i] / k + 1;
    }
    for (int i = 1; i <= 6; i++) {
        if (woman[i] % k == 0)
            room += woman[i] / k;
        else
            room += woman[i] / k + 1;
    }
    cout << room;
}