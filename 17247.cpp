#include <iostream>
#include <utility>
using namespace std;
int main() {
    int h, w, flag = 0, tmp, dis1, dis2;
    pair<int, int> start, end;
    cin >> h >> w;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> tmp;
            if (tmp) {
                if (!flag) {
                    start.first = i;
                    start.second = j;
                    flag = 1;
                } else {
                    end.first = i;
                    end.second = j;
                    break;
                }
            }
        }
    }
    dis1 = end.first - start.first;
    dis2 = end.second - start.second;
    dis1 = dis1 < 0 ? -dis1 : dis1;
    dis2 = dis2 < 0 ? -dis2 : dis2;
    cout << dis1 + dis2;
}