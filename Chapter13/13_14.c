#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define LEN_WORD 10

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
    char word1[LEN_WORD], word2[LEN_WORD];

    printf("Enter first word: ");
    scanf("%s", word1);
    printf("Enter second word: ");
    scanf("%s", word2);

    if (are_anagrams(word1, word2))
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
    unsigned k;
    int digit = 0x0;

    while (*word1) {
        if (isalpha(*word1))
            k = *word1 - (islower(*word1) ? 'a' : 'A');
        digit ^= 0x1 << k;
        word1++;
    }

    while (*word2) {
        if (isalpha(*word2))
            k = *word2 - (islower(*word2) ? 'a' : 'A');
        digit ^= 0x1 << k;
        word2++;
    }

    return digit == 0x0;
}





