#include <stdio.h>
#include "func.h"

#define N 100

void reverse(char *message);

int main(void)
{
    char message[N+1];

    printf("Enter a message: ");
    read_line(message, N);
    reverse(message);
    printf("Reversal is: %s\n", message);

    return 0;
}

void reverse(char *message)
{
    char *p = message;

    while (*(p + 1) != '\0')
        p++;

    while (message < p) {      //交换两个字符
        *message ^= *p;
        *p ^= *message;
        *message ^= *p;
        message++;
        p--;
    }                          //考虑偶数个字符情况，message和p指针永远不能相等，所以表达式不能使用判等操作符
}
