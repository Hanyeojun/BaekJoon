// ABC
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int arr[3] = {0};
    string str;

    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);
    cin >> str;

    for (int i = 0; i < 3; i++) {
        cout << arr[str[i] - 'A'] << ' ';
    }
}