#include <stdio.h>
int main() {
    int h1, m1, s1, h2, m2, s2;
    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);
    h2 -= h1;
    m2 -= m1;
    s2 -= s1;
    if (s2 < 0) {
        m2--;
        s2 += 60;
    }
    if (m2 < 0) {
        h2--;
        m2 += 60;
    }
    if (h2 < 0) {
        h2 += 24;
    }
    printf("%02d:%02d:%02d", h2, m2, s2);
}