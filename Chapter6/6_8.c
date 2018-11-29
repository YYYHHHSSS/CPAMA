#include <stdio.h>

int main(void)
{
    int d_n, s;
	printf("Enter number of days in month:");	
    scanf("%d", &d_n);
    printf("Enter starting day of the week (1=Sun, 7=Sat):");
    scanf("%d", &s);

    s = s - 1;
    for (int i = 1; i <= d_n + s; i++)
    {
        if (i <= s)
            printf("   ");
        else if (i % 7 == 0)
            printf("%2d\n", i - s);
        else
            printf("%2d ", i - s);
    }

	return 0;
}

