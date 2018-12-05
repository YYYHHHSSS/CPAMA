#include <stdio.h>
#include <ctype.h>
#include "func.h"

// basic funciton
int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n) str[i++] = ch;
    str[i] = '\0';
    return i;
}

// 跳过输入字符前的空白字符
int read_line_a(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) == ' ') 
        ;

    do {
        if (i < n) str[i++] = ch; 
    } while ((ch = getchar()) != '\n');

    str[i] = '\0';
    return i;
}

// 遇到第一个空白字符停止读入
int read_line_b(char str[], int n)
{
    int ch, i = 0;

    while (isspace(ch = getchar()) == 0)
        if (i < n) str[i++] = ch;

    str[i] = '\0';
    return i;
}

// 遇到第一个'\n'时停止读入
int read_line_c(char str[], int n)
{
    int ch, i = 0;
    do {
        ch = getchar();
        if (i < n) str[i++] = ch;
    } while (ch != '\n');
    str[i] = '\0';
    return i;
}

// 把没有空间储存的值留下来备用，表示i==n时就得退出
int read_line_d(char str[], int n)
{
    int i = 0;

    while ((str[i++] = getchar()) != '\n')
        if (i == n) break;
    str[i] = '\0';

    return i;
}
