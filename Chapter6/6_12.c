#include <stdio.h>

int main(void)
{
    float e = 1.0f, m = 1.0f, k;
    int i;

	printf("Enter a number: ");	
    scanf("%f", &k);

    for (i = 1; (m *= i, e += 1 / m) <= k; i++)
        ;
    printf("%f", e);

	return 0;
}


