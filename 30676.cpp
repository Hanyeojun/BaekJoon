#include <iostream>
using namespace std;
int main() {
    int r;
    cin >> r;
    if (r >= 620 && r <= 780)
        cout << "Red";
    else if (r >= 590 && r < 620)
        cout << "Orange";
    else if (r >= 570 && r < 590)
        cout << "Yellow";
    else if (r >= 495 && r < 570)
        cout << "Green";
    else if (r >= 450 && r < 495)
        cout << "Blue";
    else if (r >= 425 && r < 450)
        cout << "Indigo";
    else if (r >= 380 && r < 425)
        cout << "Violet";
}