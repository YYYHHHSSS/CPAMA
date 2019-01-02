#include <stdlib.h>
#include <stdio.h>

void *my_malloc(size_t n)
{
    void *p = malloc(n);

    if (p == NULL) {
        printf("Error: malloc failed in my_malloc\n");
        exit(EXIT_FAILURE);
    }

    return p;
}
