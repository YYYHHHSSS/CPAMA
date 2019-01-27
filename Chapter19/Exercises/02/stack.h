#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

#define PUBLIC  /* empty */
#define PRIVATE static

PUBLIC void make_empty(void);
PUBLIC bool is_empty(void);
PUBLIC bool is_full(void);
PUBLIC void push(int i);
PUBLIC int pop(void);

#endif
