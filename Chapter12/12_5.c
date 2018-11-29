#include <stdio.h>

#define N 100

int main(void)
{
    char sen[N], *s, *_s, *e, *stop;

    printf("Enter a sentence: ");
    for (s = sen; s < sen + N; s++)
    {
        *s = getchar();
        if (*s == '.' || *s == '?' || *s == '!')
            break;
    }

    stop = s;
    e = s;
    printf("Reversal of sentence: ");
    for (--s; s >= sen; s--)
    {
        if (*s == ' ')
        {
            _s = s;
            for (++_s; _s < e; _s++)  
                printf("%c", *_s);
            printf("%c", *s);
            e = s;
        }

    }
    for (char *_s = s; _s < e; _s++)
        printf("%c", *_s);
    printf("%c\n", *stop);

    return 0;
}

