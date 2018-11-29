#include <stdio.h>

int main(void)
{
    float max, d;

    for (max = 0.00f; ;)
    {
        
        printf("Enter a number: ");	
        scanf("%f", &d);

        if (d > max)
            max = d;

        if (d <= 0)
        {
            printf("The largest number entered was %.2f", max);
            break;
        }
    }

	return 0;
}

