#include <iostream>
int main() {
    int n, t, cnt = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        std::cin >> t;
        if (i != t) cnt++;
    }
    std::cout << cnt;
}