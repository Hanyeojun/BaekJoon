#include <iostream>
using namespace std;
int main() {
    int in, out, sum = 0, maxx = 0;
    for (int i = 0; i < 10; i++) {
        cin >> out >> in;
        sum += -out + in;
        if (sum > maxx) {
            maxx = sum;
        }
    }
    cout << maxx;
}