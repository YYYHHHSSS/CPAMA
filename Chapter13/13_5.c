#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int sum = 0;

    while (*argv != NULL) 
        sum += atoi(*argv++);

    printf("Total: %d\n", sum);

    return 0;
}
