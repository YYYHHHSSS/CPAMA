#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct point {
    int value;
    struct point *next;
};

struct point *first = NULL;

void make_empty(void)
{
    struct point *temp;

    while (first == NULL) {
        temp = first;
        first = first->next;
        free(temp);
    }
}

bool is_empty(void)
{
    return first == NULL;
}

bool push(int value)
{
    struct point *new_node = malloc(sizeof(struct point));

    if (new_node) {
        new_node->value = value;
        new_node->next = first;
        first = new_node;
    }

    return new_node != NULL;
}

int pop(void)
{
    struct point temp;
    int value;

    if (is_empty()) {
        printf("Not enough operands in expression\n");
        exit(EXIT_FAILURE);
    }

    value = first->value;
    temp = first;
    first = first->next;
    free(temp);

    return value;
}

