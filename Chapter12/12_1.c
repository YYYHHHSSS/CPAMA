#include <stdio.h>

#define N 100

int main(void)
{
    char sen[N], *p = sen;
    int n = 0;

    printf("Enter a message: ");
//    for (; p < sen + N; p++)
//    {
//        *p = getchar();
//        if (*p == '\n')
//            break;
//    }

    while (n < N && (*p = getchar()) != '\n')  // 这里必须是‘与’语句
    {
        p++;
        n++;
    }

    printf("Reversal is: ");
    while (--p >= sen)
        putchar(*p);

    printf("\n");

    return 0;
}

