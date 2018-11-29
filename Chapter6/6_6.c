#include <stdio.h>

int main(void)
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i * i <= n; i++)
        if (i % 2 == 0) printf("%d\n", i * i);	

	return 0;
}

