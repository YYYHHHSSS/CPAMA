#include "../01/queue.h"
#include <stdbool.h>

#define PUBLIC /* empty */
#define PRIVATE static

PRIVATE bool isEmpty(Queue s);
PRIVATE void terminate(const char *message);

PRIVATE struct queue_type {
    Item contents;
    Queue next;
};

PRIVATE Queue last = NULL;
PRIVATE Queue first = NULL;

PUBLIC void insert(Queue s, Item i)
{
    Queue new_node;
    new_node = malloc(sizeof(struct queue_type));
    if (new_node == NULL)
        terminate("Error in insert.");
    new_node->contents = i;
    new_node->next = s;
    s = new_node;
    last = s;
}

PUBLIC Item del(Queue s)
{
    Item i;

    if (isEmpty(s))
        terminate("Error in del.");
    first = s;
    s = s->next;
    i = first->contents;
    free(first);
    first = s;

    return i;
}
    
PUBLIC getFirst(const Queue s)
{
    if (isEmpty(s))
        terminate("Error in getFirst.");
    return first->contents;
}

PUBLIC getEnd(const Queue s)
{
    if (isEmpty(s))
        terminate("Error in getEnd.");
    return last->contents;
}

PUBLIC bool isEmpty(Queue s)
{
    return s == NULL;
}

PRIVATE void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}
