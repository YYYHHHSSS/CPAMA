#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include "func.h"

#define N 100

bool is_palindrome(const char *message);

int main(void)
{
    char message[N+1];

    printf("Enter a message: ");
    read_line(message, N);

    if (is_palindrome(message))
        printf("Palinfrome\n");
    else
        printf("Not a palinfrome\n");

    return 0;
}

bool is_palindrome(const char *message)
{
    int m = 0, n = 0;

    while (message[m+1] != '\0')
        m++;

    while (message[n] != '\0') {
        if (!isalpha(message[n])) {
            n++;
            continue;
        }
        if (!isalpha(message[m])) {
            m--;
            continue;
        }

        if (toupper(message[n++]) != toupper(message[m--]))
            return false;
    }

    return true;
}

    
