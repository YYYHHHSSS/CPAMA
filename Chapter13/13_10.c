#include <stdio.h>
#include <string.h>
#include "func.h"

#define N 100

void reverse_name(char *name);

int main(void)
{
    char name[N+1];

    printf("Enter a first and last name: ");
    read_line_a(name, N);
    reverse_name(name);

    printf("%s\n", name);

    return 0;
}


void reverse_name(char *name)
{
    char ch[5] = {',', ' ', ' ', '.', '\0'};
    ch[3] = *name;

    char *f, *p;
    f = p = name;
    for (;;) 
        if (*p++ == ' ') break;
    while (*f++ = *p++)
        ;
    strcat(name, ch);
}



