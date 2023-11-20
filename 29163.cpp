#include <iostream>
int main() {
    int n;
    std::cin >> n;
    int oddCnt = 0, evenCnt = 0;
    
    while (n--) {
        int t;
        std::cin >> t;
        if (t % 2 == 0)
            evenCnt++;
        else
            oddCnt++;
    }
    if (evenCnt > oddCnt)
        std::cout << "Happy";
    else
        std::cout << "Sad";
}