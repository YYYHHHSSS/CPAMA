#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 20

int compute_scrabble_value(const char *word);

int main(void)
{
    char word[N];

    printf("Enter a word: ");
    scanf("%s", word);

    printf("Scrabble value: %d\n", compute_scrabble_value(word));

    return 0;
}

int compute_scrabble_value(const char *word)
{
    int i, sum = 0;
    char *scrabble[] = {"", "AEILNORSTU", "DG", "BCMP", "FHVWY", "K", "", "", "JX", "", "QZ"};
    char *point_to_str;

    while (*word) {
        for (i = 0; i < 11; i++) {
            point_to_str = scrabble[i];
            while (*point_to_str) {
                if (*point_to_str == toupper(*word)) {
                    sum += i;
                    break;
                }
                point_to_str++;
            }
        }
        word++;
    }

    return sum;
}


