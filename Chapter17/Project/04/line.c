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
    struct node *first; 

    first = malloc(sizeof(struct node) + strlen(word) + 1);
    if (first == NULL) {
        printf("Error: malloc failed in add_word.\n");
        exit(EXIT_FAILURE);
    }
    strcpy(first->word, word);
    strcat(first->word, " ");
    first->next = line;
    line = first;
    line_len += strlen(word) + 1;        /* 每添加一个单词，行的长度增加一个单词和一个空格的长度 */
    num_words++;
}

int space_remaining(void)
{
    return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
    int extra_spaces, spaces_to_insert, i, j;

    extra_spaces = MAX_LINE_LEN - line_len;
    while (line != NULL) {
        puts(line->word);
        spaces_to_insert = extra_spaces / (num_words - 1);
        for (j = 1; j <= spaces_to_insert + 1; j++)
            putchar(' ');
        extra_spaces -= spaces_to_insert;
        num_words--;
        line = line->next;
    }
    putchar('\n');
}

void flush_line(void)
{
    struct node *point = line; 
    while (point) {
        puts(point->word);
        point = point->next;
    }
}
