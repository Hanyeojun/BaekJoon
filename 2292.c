#pragma warning(disable: 4996)
#include<stdio.h>
int main() {
    int n = 0, start = 1, end = 1, cnt = 1;
    scanf("%d", &n);

    if (n == 1) {
        printf("%d", 1);
        return 0;
    }
    while (1) {
        start = start + 6 * (cnt - 1);
        end = end + 6 * cnt;
        cnt++;

        if ((n > start) && n <= end) {
            printf("%d", cnt);
            break;
        }
    }
    return 0;
}
//6 * x + 1