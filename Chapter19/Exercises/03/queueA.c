#include "../01/queue.h"
#include <stdbool.h>

#define PUBLIC /* empty */
#define PRIVATE static

#define NUM 100 

PRIVATE bool is_full(void);
PRIVATE void terminate(const char *message);

PRIVATE struct queue_type {
    Item contents[NUM];
    int len;
};

PRIVATE int last = 0;
PRIVATE int first = 0;

PUBLIC void insert(Queue s, Item i)
{
    if (s->len == NUM) 
        terminate("Error in insert.");
    s->contents[last] = i;
    last = (last + 1 == NUM) ? 0 : last + 1;
    (s->len)++;
}

PUBLIC Item del(Queue s)
{
    Item i;

    if (is_empty())
        terminate("Error in del.");
    i = s->contents[first++];
    len--;

    return i;
}
    
PUBLIC getFirst(const Queue s)
{
    if (is_empty())
        terminate("Error in getFirst.");
    return s->contents[first];
}

PUBLIC getEnd(const Queue s)
{
    if (isEmpty(s))
        terminate("Error in getEnd.");
    if (last == 0)
        return s->contents[NUM-1];
    return s->contents[last-1];
}

PUBLIC bool isEmpty(Queue s)
{
    return s->len == 0;
}

PRIVATE void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}
