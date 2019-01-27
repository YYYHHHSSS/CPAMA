#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int Item;
typedef struct queue_type *Queue;

void insert(Queue s, Item i);
Item del(Queue s);
Item getFirst(const Queue s);
Item getEnd(const Queue s);
bool isEmpty(Queue s);

#endif



