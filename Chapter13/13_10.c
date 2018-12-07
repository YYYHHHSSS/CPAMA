#include <stdio.h>
#include <string.h>

#define N 100

void reverse_name(char *name);
void read_name(char name[], int n);

int main(void)
{
    char name[N+1];

    printf("Enter a first and last name: ");
    read_name(name, N+1);
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


void read_name(char name[], int n) //读取姓名，并处理名、姓及名和姓之间的空格
{
    int i = 0;
    char ch;

    while ((ch = getchar()) == ' ')
        ;
    name[i++] = ch;

    while ((ch != '\n') && i < n) {
        if ((ch = getchar()) == ' ') {
            name[i++] = ch;
            while ((ch = getchar()) == ' ')
                ;
        }
        if (i < n)
            name[i++] = ch;
    }

    if (name[i-2] == ' ')
        i -= 2;
    else if (name[i-1] == ' ')
        i--;
    
    name[i] = '\0';
    printf("The name is %s: \n", name);
}


