#include <stdio.h>
int main() {
    int n, a[30] = {};
    for (int i = 0; i < 28; i++) {
        scanf("%d", &n);
        a[n - 1] = 1;
    }
    for (int i = 0; i < 30; i++) {
        if (a[i] != 1) printf("%d\n", i + 1);
    }
    return 0;
}