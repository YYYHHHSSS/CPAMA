#include <stdio.h>

int main(void)
{
	float a, b;

	printf("The income is: ");
	scanf("%f", &a);

	if (a > 7000) b = 230.00 + (a - 7000) * 6 / 100;
	else if (a > 5250) b = 142.50 + (a - 5250) * 5 / 100;
	else if (a > 3750) b = 82.50 + (a - 3750) * 4 / 100;
	else if (a > 2250) b = 37.50 + (a - 2250) * 3 / 100;
	else if (a > 750) b = 7.50 + (a - 750) * 2 / 100;
	else b = a / 100;

	printf("The ta is: %f", b);
	
	return 0;
}
