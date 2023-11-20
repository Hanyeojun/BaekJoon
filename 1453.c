#include<stdio.h>
int main(void) {
	int a[101] = { };
	int n = 0, s = 0, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &s);
		if (a[s] > 0) {
			cnt++;
		}
		a[s]++;
	}
	printf("%d\n", cnt);
}

/*
#include <iostream>
using namespace std;
int main() {
    int cnt = 0, guest, a[101] = { 0 }, num;
    cin >> guest;
    for (int i = 0; i < guest; i++)
    {
        cin >> num;
        if (a[num] > 0)cnt++;
        a[num]++;
    }
    cout << cnt << '\n';
}
*/