#include <iostream>
using namespace std;
int main() {
    char arr[10];
    cin.getline(arr, 10);
    if ((arr[0] - '0') + arr[4] - '0' == arr[8] - '0')
        cout << "YES";
    else
        cout << "NO";
}