#include <iostream>
using namespace std;
int main() {
    int n1, n2, n12;
    cin >> n1 >> n2 >> n12;
    double tmp = (n1 + 1) * (n2 + 1) / (n12 + 1);
    cout << int(tmp - 1);
}