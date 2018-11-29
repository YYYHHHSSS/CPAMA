#include <stdio.h>
#include <ctype.h>

#define N 100

int main(void)
{
    char sen[N], *p, *k;
    int n = 0;

    printf("Enter a message: ");
    for (p = sen; p < sen + N; p++)
    {
        if ((*p = getchar()) != '\n') 
        {
            if (isalpha(*p))
                *p = tolower(*p);
            else
                p--;
        }
        else
            break;
    }

    k = sen;
    for (--p; p >= sen; p--)
    {
        if (*p != *k)
        {
            printf("Not a palindrome.\n");
            return 0;
        }
        else
            k++;
    }

    printf("Palinfrome.\n");

    return 0;
}


