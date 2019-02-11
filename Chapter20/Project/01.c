#include <stdio.h>

typedef union {
    float m;
    struct {                       /* 小端法 */
        unsigned int f : 23;
        unsigned int e : 8;
        unsigned int s : 1;
    } n;
} FIX;

int main(void)
{
    FIX x;

    x.n.s = 1;
    x.n.e = 128;
    x.n.f = 0;

    printf("%.1f\n", x.m);

    return 0;
}



