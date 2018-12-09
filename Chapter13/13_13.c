#include <stdio.h>
#include <ctype.h>
#include "func.h"

#define N 100

void encrypt(char *message, int shift);

int main(void)
{
    char message[N+1];
    int n;

    printf("Enter message to be encrypted: ");
    read_line(message, N);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);

    encrypt(message, n);
    printf("Encrypted message: %s\n", message);

    return 0;
}

void encrypt(char *message, int shift)
{
    char ch;
    while (*message) {
        if (isalpha(*message)) {
            ch = isupper(*message) ? 'A' : 'a';
            *message = ((*message - ch) + shift) % 26 + ch;
        }
        message++;
    }
}

