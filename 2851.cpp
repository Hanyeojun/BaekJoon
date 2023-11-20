// 슈퍼 마리오
#include <iostream>
using namespace std;
int main() {
    int arr[10] = {0};
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    int sum = 0, res = 0;
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
        if(abs(100-sum)<=abs(100-res)){
            res = sum;
        }
    }
    cout << res;
}