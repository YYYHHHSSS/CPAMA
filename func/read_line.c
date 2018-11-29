#include <stdio.h>
#include <string.h>

int read_line(char str[], int n)
{
    int ch, i = 0;

    while (ch = getchar()) == ' ') // 跳过输入字符前的空白字符
        ;

    do {
        if (i < n) str[i++] = ch; 
    } while ((ch = getchar()) != '\n');

    str[i] = '\0';
    return i;
}
