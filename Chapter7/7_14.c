#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y = 1.0, k;
    
	printf("Enter a positive number: ");	
    scanf("%lf", &x);

    k = (y + x / y) / 2;
    while (fabs((y - k)) >= 0.00001)  
    {
        y = k;
        k = (y + x / y) / 2;
    }
    printf("Square root: %f", y);

    
	return 0;
}

