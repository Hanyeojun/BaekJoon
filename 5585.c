#pragma warning(disable: 4996)
#include <stdio.h>
int main(void) {
	int m[6] = { 500,100,50,10,5,1 };
	int pay = 0, change = 0, ct = 0;
	scanf("%d", &pay);
	change = 1000 - pay;
	for (int i = 0; i < 6; i++) {
		ct += change / m[i];
		change %= m[i];
	}
	printf("%d", ct);
}

/*int pay = 0, change = 0, ct = 0;
scanf("%d", &pay);
change = 1000 - pay;
while(change != 0) {
	ct += change / 500;
	change = change % 500;

	ct += change / 100;
	change = change % 100;

	ct += change / 50;
	change = change % 50;

	ct += change / 10;
	change = change % 10;

	ct += change / 5;
	change = change % 5;

	ct += change / 1;
	change = change % 1;
}
printf("%d\n", ct);*/