#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<char> v;      // 정답 문자열 저장
    string input, bomb;  // 입력 문자열, 폭발 문자열
    bool flag = false;

    cin >> input >> bomb;

    int inputlen = input.length();
    int bomblen = bomb.length();

    for (int i = 0; i < inputlen; i++) {
        v.push_back(input[i]);  // v에 입력 문자열의 문자 하나씩 삽입

        if (v.size() >= bomblen) {  // 폭발 문자열 길이보다 길거나 같으면
            flag = true;
            for (int i = 0; i < bomblen; i++) {  // 폭발 문자열 길이만큼 반복
                if (v[v.size() - bomblen + i] != bomb[i]) {
                    flag = false;  // 폭발 문자열이 포함되어있지 않으면 false
                    break;
                }
            }
            if (flag) {  // true면 폭발 문자열이 포함되어있다는 뜻
                for (int i = 0; i < bomblen; i++) {
                    v.pop_back();
                }
            }
        }
    }
    if (v.empty()) {  // v가 비었을 때
        cout << "FRULA";
    } else {  // v에 값이 있다면
        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
        }
    }
}