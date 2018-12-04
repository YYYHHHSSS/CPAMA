#include <stdio>
#include <string.h>

int compare_word(void)
{
    char smallest_word[20+1] = "";
    char largest_word[20+1] = "";
    char word[20+1];

    printf("Enter word: ");
    scanf("%s", word);

    while (strlen(word) != 4) {
        strcpy(smallest_word, word);
        if (strcmp(largest_word, smallest_word) < 0) 
            strcpy(largest_word, smallest_word);
        printf("Enter word: ");
        scanf("%s", word);
    }

    printf("Smallest word: %s\nLargest word: %s\n", smallest_word, largest_word);

    return 0;
}




