#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int numerator, denominator;

    printf("Enter two integers:");	
    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &numerator, &denominator);

    printf("In lowest terms: %d/%d\n", numerator, denominator);

    return 0;
}


void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int temp;
    while (numerator != 0)
    {
        temp = denominator % numerator;
        denominator = numerator;
        numerator = temp;
    }

    *reduced_numerator /= denominator;
    *reduced_denominator /= denominator;
}

