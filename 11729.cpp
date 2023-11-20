// 하노이 탑 이동 순서
#include <cmath>
#include <iostream>
using namespace std;

void hanoi(int start, int middle, int end, int n) {
    if (n == 1)
        cout << start << ' ' << end << '\n';
    else {
        hanoi(start, end, middle, n - 1);
        cout << start << ' ' << end << '\n';
        hanoi(middle, start, end, n - 1);
    }
}
int main() {
    int N;
    cin >> N;
    cout << (int)pow(2, N) - 1 << '\n';
    hanoi(1, 2, 3, N);
}