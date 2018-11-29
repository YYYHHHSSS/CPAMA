#include <stdio.h>

int gcd(int m, int n);

int main(void)
{
    int m, n;

	printf("Enter two integers:");	
    scanf("%d%d", &m, &n);

//    while (n != 0 )
//    {
//        d = m % n;
//        m = n;
//        n = d;
//    }

    printf("Greatest common divisor: %d", gcd(m, n));

	return 0;
}

int gcd(int m, int n)
{
    if (n == 0)
        return m;
    else
        return gcd(n, m % n);
}


