#include <stdio.h>

int main(void)
{
	float x, x_3, x_5;
	printf("请输入:");
	scanf("%f", &x);
	x_3 = x * x * x;
	x_5 = x * x * x * x * x;
	printf("多项式的值:%10f\n", (3 * x_5) + (2 * x_5 / x) - (5 * x_3) - (x * x) + 7 * x -6);

	return 0;
}
