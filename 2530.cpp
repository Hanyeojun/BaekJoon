#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int A, B, C, D;
    cin >> A >> B >> C >> D;
    C += D;
    B += C / 60;
    A += B / 60;
    cout << A % 24 << " " << B % 60 << " " << C % 60;
}