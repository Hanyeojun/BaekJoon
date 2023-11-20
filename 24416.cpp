#include<iostream>
using namespace std;
int rc = 0, dp = 0, a[40] = {0};
int fib(int n) {
    if (n == 1 || n == 2) {
        rc++;
        return 1;
    }
    else return (fib(n - 1) + fib(n - 2));
}
void fibonacci(int n) {
    a[1] = 1;
    a[2] = 1;
    for (int i = 3; i <= n; i++) {
        dp++;
        a[i] = a[i - 1] + a[i - 2];
    }
}
int main() {
    int n;
    long long res;
    cin >> n;
    fib(n);
    fibonacci(n);
    cout << rc << " " << dp;
}