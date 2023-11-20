#include <iostream>
int main() {
    int a, b;
    std::cin >> a >> b;
    if (a >= 20 && a <= 23)
        std::cout << (24 - a) + b;
    else if (a >= 0 && a <= 3)
        std::cout << b - a;
}