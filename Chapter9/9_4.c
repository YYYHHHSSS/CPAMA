#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(char counts[]);
bool equal_array(char counts1[], char counts2[]);

int main(void)
{
    char counts1[26], counts2[26];

    printf("Enter first word: ");
    read_word(counts1);
    printf("Enter second word: ");
    read_word(counts2);

    if (equal_array(counts1, counts2))
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

	return 0;
}

void read_word(char counts[])           // 为数组读取元素
{
    int i = 0;
    char c;
    while (i < 10)
    {
        c = getchar();
        counts[i] = c;
        if (c == '\n')
            break;
        i++;
    }
}

bool equal_array(char counts1[], char counts2[])  // 记录数组1的元素个数，再减去数组2的元素个数，如果记录数组中有元素不为0,则说明数组1、2的元素种类不一样。 
{
    int n, equal_array[26] = {0}; 

    for (int i = 0; i < 100; i++)
    {
        if (isalpha(counts1[i]))
        {
            n = tolower(counts1[i]) - 'a';
            equal_array[n]++;
        }

        if (isalpha(counts2[i]))
        {
            n = tolower(counts2[i]) - 'a';
            equal_array[n]--;
        }
        else
            break;
    }

    for (int i = 0; i < 26; i++) 
        if (equal_array[i] != 0)
            return false;

    return true;
}
            

