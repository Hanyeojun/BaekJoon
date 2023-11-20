// 주유소
#include <iostream>
using namespace std;
int dist[100000];
int price[100000];
int main() {
    int n;
    cin >> n;
    long long sum = 0, nc;
    for (int i = 1; i < n; i++) {
        cin >> dist[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }
    nc = price[0];       // 첫 번째 도시의 가격으로 nc 지정
    sum = nc * dist[1];  // 도시1에서 도시2로 이동 비용

    for (int i = 1; i < n; i++) {
        if (nc < price[i]) {          // 현재 도시의 가격이 i번째 도시 가격보다 적으면
            sum += nc * dist[i + 1];  // 다음 도시까지의 이동거리도 현재 도시에서 주유
        } else {
            nc = price[i];
            sum += nc * dist[i + 1];
        }
    }
    cout << sum;
}