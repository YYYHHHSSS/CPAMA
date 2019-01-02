#include <string.h>
#include <stdlib.h>

char *duplicate(const char *str)
{
    char *p = malloc(strlen(str) + 1);

    if (p != NULL) 
        strcpy(p, str);

    return p;
}



