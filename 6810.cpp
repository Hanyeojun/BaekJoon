// ISBN
#include <iostream>
using namespace std;
int main() {
    int sum = 91;
    int n;
    for (int i = 0; i < 3; i++) {
        cin >> n;
        if (i == 1)
            sum += n * 3;
        else
            sum += n;
    }
    cout << "The 1-3-sum is " << sum;
}