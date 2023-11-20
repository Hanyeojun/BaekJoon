#include <iostream>
int main() {
    int r, c;
    std::cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            std::cout << '*';
        }
        std::cout << '\n';
    }
}