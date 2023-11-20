#include <iostream>
int main() {
    int n;
    std::cin >> n;
    int r = n / 2 + 1;
    int c = n - r + 2;
    std::cout << r * c;
}