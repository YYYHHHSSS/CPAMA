#include <stdio.h>

int main(void)
{
    typedef double T_type;
    T_type a, s;
    int n;
	printf("Enter a positive integer: ");	
    scanf("%lf", &a);

//    for (s = 1; a > 0; a--)
//        s = s * a;
//    printf("Factorial of %hd: %hd\n", a, s);
//
//    for (s = 1; a > 0; a--)
//        s = (int) s * a;
//    printf("Factorial of %d: %d\n", a, s);
//
//
//    for (s = 1; a > 0; a--)
//        s = (long) s * a;
//    printf("Factorial of %ld: %ld\n", a, s);
//
//    for (s = 1; a > 0; a--)
//        s = (long long) s * a;
//    printf("Factorial of %lld: %lld\n", a, s);

    n = (int) a;                          // 求阶乘
    for (s = 1.0; n > 0; n--)
        s = s * n;
    printf("Factorial of %.1f: %f\n", a, s);

//   for (s = 1; a > 0; a--)
//       s = (double) s * a;
//   printf("Factorial of %f: %f\n", a, s);
//
//   for (s = 1; a > 0; a--)
//       s = (long double) s * a;
//   printf("Factorial of %Lf: %Lf\n", a, s);
//   
	return 0;
}

