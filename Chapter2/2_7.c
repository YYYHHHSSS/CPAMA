#include <stdio.h>

int main(void)
{
	int x, a, b, c, d;

	printf("Enter a dollar amount:");
	scanf("%d", &x);

	a = x / 20;
	b = x % 20 / 10;
	c = x % 20 % 10 / 5;
	d = x % 20 % 10 % 5;

	printf("$20\tbills:%d\n$10\tbills:%d\n$5\tbills:%d\n$1\tbills:%d\n", a, b, c, d);

	return 0;
}
