#include <stdio.h>

int main(void)
{
    int m, n, d;

	printf("Enter two integers:");	
    scanf("%d%d", &m, &n);

//    for (int i = 1; i <= a && i <= b; i++)
//    {
//        if (a % i ==0 && b % i==0)
//            max = i;
//    }

    while (n != 0 )
    {
        d = m % n;
        m = n;
        n = d;
    }


    printf("Greatest common divisor: %d", m);

	return 0;
}

