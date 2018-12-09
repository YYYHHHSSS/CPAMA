#ifndef FUNC_H
#define FUNC_H

#include <stdbool.h>

#define STACK_SIZE 100

// read a line
void read_line(char sentence[], int n);

int read_line_a(char str[], int n);

int read_line_b(char str[], int n);

int read_line_c(char str[], int n);

int read_line_d(char str[], int n);

// function of stack
void make_empty(void);

bool is_empty(void);

bool is_full(void);

void push(int i);

int pop(void);

void stack_overflow(void);

void stack_underflow(void);

#endif
