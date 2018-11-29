#include <stdio.h>

int main(void)
{
	float x, a, b, c, d, e;
	printf("Enter a nu:");
	scanf("%f", &x);
	a = 3 * x + 2;
	b = a * x - 5;
	c = b * x - 1;
	d = c * x + 7;
	e = d * x - 6;
	printf("The total nu is: %f\n", e);

	return 0;
}

