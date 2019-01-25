/* line.c主要用于储存当前行的字符，
 * 并跟踪当前行的状态，当前行的字符数、单词数
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line.h"

#define MAX_LINE_LEN 60                  /* 表示一个输出行最大多少个字符 */

struct node {                            /* 创建一个表示一个单词的结构 */
    struct node *next;
    char word[];
};

struct node *line = NULL;                /* 创建一个指向当前行的指针 */

int line_len = 0;                        /* 记录行的长度 */
int num_words = 0;                       /* 记录单词的数量 */

void clear_line(void)                    /* 清除行 */
{
    struct node *temp;

    while (line != NULL) {
        temp = line;
        line = line->next;
        free(temp);
    }
    line_len = 0;
    num_words = 0;
}

void add_word(const char *word)
{
    struct node *first, **last = &line; 

    first = malloc(sizeof(struct node) + strlen(word) + 1);
    if (first == NULL) {
        printf("Error: malloc failed in add_word.\n");
        exit(EXIT_FAILURE);
    }
    strcpy(first->word, word);
    first->next = NULL;
    while (*last != NULL)
        last = &(*last)->next;
    *last = first;
    line_len += strlen(word);        
    if (num_words > 0) line_len++;              /* 每添加一个单词，行的长度增加一个单词和一个空格的长度 */
    num_words++;
}

int space_remaining(void)
{
    return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
    int extra_spaces, spaces_to_insert, i, j;
    int char_count = 0;
    struct node *point = line;

    extra_spaces = space_remaining();
    while (char_count < line_len && point != NULL) {
        printf("%s", point->word);
        if (num_words > 1) {
            spaces_to_insert = extra_spaces / (num_words - 1);
            for (j = 1; j <= spaces_to_insert + 1; j++)
                putchar(' ');
            extra_spaces -= spaces_to_insert;
        }
        char_count += strlen(point->word) + 1; 
        num_words--;
        point = point->next;
    }
    putchar('\n');
}

void flush_line(void)
{
    struct node *point = line; 
    int i;
    if (line_len > 0) {
        for (i = 0, point = line; point; i++, point = point->next) {
            if (i > 0 && point->next != NULL)
                putchar(' ');
            printf("%s ", point->word);
        }
    }
    printf("\n");
}
