#include <stdio.h>

int main(void)
{
	int a, c;
	
	printf("Enter a two-digit number:");
	scanf("%d", &a);

    c = 0;
    do
    {
        c = 10 * c + a % 10;
        a /= 10;
    } while (a != 0);

    printf("The reversal is: %d", c);	

	return 0;
}

