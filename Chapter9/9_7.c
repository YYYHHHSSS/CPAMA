#include <stdio.h>

int power(int x, int n);

int main(void)
{
    int x, n;

	printf("Enter the index: ");	
    scanf("%d", &x);
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("The result is: %d", power(x,n));

	return 0;
}

int power(int x, int n)
{

    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else if (n % 2 == 0)
        return power(x, n / 2) * power(x, n / 2);
    else 
        return x * power(x, n / 2) * power(x, n / 2);
}
