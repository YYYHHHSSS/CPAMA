#include <stdio.h>

double pol(double x);

int main(void)
{
    double x;

	printf("Enter a number: ");	
    scanf("%lf", &x);

    printf("The result is: %f", pol(x));

	return 0;
}

double pol(double x)
{
    return 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
}
