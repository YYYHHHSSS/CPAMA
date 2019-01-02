#include <stdlib.h>

int *create_array(int n, int initial_value)
{
    int i, *p = malloc(n * sizeof(int));

    if (p != NULL) 
        for (i = 0; i < n; i++) 
            p[i] = initial_value;

    return p;
}


