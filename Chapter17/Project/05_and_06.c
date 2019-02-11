#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHAR_NUM 20                         /* 每个单词最大长度 */
#define NUM_POINT 50                        /* 输入单词的最大数量 */
#define DEBUG 1

int read_line(char str[], int n);
int compare_word(const void *, const void *);

int main(void)
{
    char *word_point[NUM_POINT];            /* 创建一个指针数组 */
    char word_str[CHAR_NUM+1];              /* 缓存输入的单词 */
    int n, i = 0, j = 0;                               /* 单词的长度 */

    for (;;) {
        printf("Enter word: ");
        n = read_line(word_str, CHAR_NUM);
        if (n == 0 || i > NUM_POINT) break;
        word_point[i] = malloc(strlen(word_str) + 1);
        if (word_point[i] == NULL) {
            printf("Error: malloc failed\n");
            break;
        }
        strcpy(word_point[i++], word_str);
    }

    qsort(word_point, i - 1, sizeof(word_point[0]), compare_word); 

    printf("In sorted order: ");
    while (j < i)
        printf("%s ", word_point[j++]);
    printf("\n");

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

int compare_word(const void *p, const void *q)
{
    return strcmp(*(char **) p, *(char **) q);
}
