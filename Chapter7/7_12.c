#include <stdio.h>

int main(void)
{
    float a, b, c, f, g;
    char d, e;

	printf("Enter an expression: ");	
    scanf("%f %c %f %c %f", &a, &d, &b, &e, &c);

    switch (d)
    {
        case '+':
            f = a + b;
            break;
        case '-':
            f = a - b;
            break;
        case '*':
            f = a * b;
            break;
        case '/':
            f = a / b;
            break;
    }

    switch (e)
    {
        case '+':
            g = c + f;
            break;
        case '-':
            g = c - f;
            break;
        case '*':
            g = c * f;
            break;
        case '/':
            g = c / f;
            break;
    }

    printf("Value of expression: %.2f", g);

	return 0;
}

