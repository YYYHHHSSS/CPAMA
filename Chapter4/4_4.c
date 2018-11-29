#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, f;

	printf("Enter a number between 0 and 32767:");	
	scanf("%d", &a);
	
	b = a % 8;
	c = a / 8 % 8;
	d = a / 8 / 8 % 8;
	e = a / 8 / 8 / 8 % 8;
	f = a / 8 / 8 / 8 / 8 % 8;
	
	printf("In octal, your number is: %d%d%d%d%d", f, e, d, c, b); 


	return 0;
}

