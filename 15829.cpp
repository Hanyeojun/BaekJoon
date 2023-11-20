#include <iostream>
using namespace std;
#define M 1234567891;
int main() {
    int l;
    string str;
    cin >> l >> str;
    long long hash = 0, r = 1;
    // 해시 함수 구현 for문
    for (int i = 0; i < l; i++) {
        hash = (hash + (str[i] - 'a' + 1) * r) % M;
        r = (r * 31) % M;
        // mod 연살할 때 같이 mod연산하면 결과값에 지장 x
    }
    cout << hash;
}