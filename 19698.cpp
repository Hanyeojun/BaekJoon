#include <iostream>
using namespace std;
int main() {
    int n, w, h, l;
    cin >> n >> w >> h >> l;
    int res = (w / l) * (h / l);
    if (n < res)
        cout << n;
    else
        cout << res;
}