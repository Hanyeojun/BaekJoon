// 삼각형 분류
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int arr[3];
        for (int i = 0; i < 3; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + 3);
        cout << "Case #" << i + 1 << ": ";

        if (arr[0] == arr[1] && arr[1] == arr[2]) {
            cout << "equilateral\n";
        } else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2]) {
            if (arr[0] + arr[1] > arr[2]) {
                cout << "isosceles\n";
            } else {
                cout << "invalid!\n";
            }
        } else {
            if (arr[0] + arr[1] > arr[2]) {
                cout << "scalene\n";
            } else {
                cout << "invalid!\n";
            }
        }
    }
}