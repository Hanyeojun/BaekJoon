#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    cout << n * (n - 1) * (n - 2) * (n - 3) / 24;
}
// 하나의 교차점을 위해선 선분 2개 필요
// 선분 2개 => 꼭짓점 4개 필요
// n개의 꼭짓점의 볼록 다각형에서 하나의 교차점을 위해 4개의 꼭짓점 선택 => nC4