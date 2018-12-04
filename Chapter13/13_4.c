#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    while (--argc > 0)
        printf("%s ", argv[argc]);
    printf("\n");
    return 0;
}
