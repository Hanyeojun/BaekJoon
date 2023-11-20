#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> res;
int x, y;

int Discern(int num[]) {
    vector<int> tmp;

    for (int i = 1; i <= 6; i++) {
        if (num[i] > 0) tmp.push_back(i);

        if (num[i] == 4) {  // 같은 값 4개
            x = i;
            return 1;
        } else if (num[i] == 3) {  // 같은 값 3개
            x = i;
            return 2;
        } else if (num[i] == 2) {               // 같은 값 2개 중
            for (int j = i + 1; j <= 6; j++) {  // 같은 값 2개 2쌍
                if (num[j] == 2) {
                    x = i;
                    y = j;
                    return 3;
                }
            }
            // 같은 값 2개 1쌍
            x = i;
            return 4;
        }
    }
    // 모두 다른 값
    sort(tmp.begin(), tmp.end());  // 정렬
    x = tmp[tmp.size() - 1];       // 제일 큰 값 x에 저장
    return 5;
}

int main() {
    cin >> n;
    res.resize(n);  // 크기 재설정

    for (int i = 0; i < n; i++) {
        int num[7] = {0}, dice[4];  // 주사위 값 카운트, 주사위 값

        for (int j = 0; j < 4; j++) {  // 주사위 값 입력
            cin >> dice[j];
            num[dice[j]]++;  // 해당 값 카운트+
        }

        int flag = Discern(num);  // 같은 값 개수에 따른 경우의 수

        if (flag == 1)  // 같은 값 4개
            res[i] = 50000 + x * 5000;
        else if (flag == 2)  // 같은 값 3개
            res[i] = 10000 + x * 1000;
        else if (flag == 3)  // 같은 값 2개 2쌍
            res[i] = 2000 + x * 500 + y * 500;
        else if (flag == 4)  // 같은 값 2개 1쌍
            res[i] = 1000 + x * 100;
        else  // 모두 다른 값
            res[i] = x * 100;
    }
    sort(res.begin(), res.end());  // tc 결과값 정렬
    cout << res[n - 1];            // 가장 큰 값
}