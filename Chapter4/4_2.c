#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	
	printf("Enter a three-digit number:");
	scanf("%d", &a);

	b = a / 100;
	c = a % 100 / 10;
	d = a % 100 % 10;
	printf("The reversal is: %d%d%d", d, c, b);	


	return 0;
}


