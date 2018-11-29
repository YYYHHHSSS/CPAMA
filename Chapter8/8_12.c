#include <stdio.h>

int main(void)
{
    int a[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int sum = 0;
    char word, words[26];

    for (int i = 0; i < 26; i++)
        words[i] = 'a' + i;

    printf("Enter a word: ");
    while ((word = getchar()) != '\n') 
        for (int i = 0; i < 26; i++)
            if (word == words[i])
                sum += a[i];

    printf("Scrabble value: %d\n", sum);

	return 0;
}



