#include <stdio.h>

int main(void)
{
    int n;
    float e = 1.0f, m = 1.0f;

	printf("Enter a number: ");	
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        m *= i, e += 1 / m;

    printf("%.2f", e);

	return 0;
}

