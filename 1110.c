#pragma warning(disable: 4996)
#include<stdio.h>
int main(void) {
    int n = 0, x = 0, count = 0;
    scanf("%d", &n);
    int a = n;
    while (1) {
		x = ((n % 10) * 10) + (((n / 10) + (n % 10)) % 10);
		count++;
        n = x;
        if (a == x) {
            printf("%d\n", count);
            break;
        }
	}
    return 0;
}

/*#include <stdio.h>
int main()
{
    int N, count = 0;
    scanf("%d", &N);
    int A = N;
    while (1)
    {
        N = (N / 10 + N % 10) % 10 + N % 10 * 10, count++;
        if (N == A)
        {
            printf("%d", count);
            break;
        }
    }
    return 0;
}
*/