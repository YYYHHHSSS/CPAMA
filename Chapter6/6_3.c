#include <stdio.h>

int main(void)
{
    int m, n, d, m1, n1;

	printf("Enter two integers:");	
    scanf("%d/%d", &m, &n);

    m1 = m;
    n1 = n;
    
    while (n1 != 0 )
    {
        d = m1 % n1;
        m1 = n1;
        n1 = d;
    }

    printf("In lowest terms: %d/%d", m / m1, n / m1);

	return 0;
}


