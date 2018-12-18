#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "func.h"

#define N 100

int evaluate_RPN_expression(const char *expression);

int main(void)
{
    char expression[N+1];

    for (;;) {
    printf("Enter an RPN expression: ");
    read_line(expression, N);
    printf("Value of expression: %d\n", evaluate_RPN_expression(expression));
    }

    return 0;
}

int evaluate_RPN_expression(const char *expression)
{
    int value = 0;

    while (*expression) {
        if (isdigit(*expression)) {
            value = *expression - '0';
            push(value);
        }
        else
            switch (*expression) {
                case '+': value = pop();
                          value = pop() + value;
                          push(value);
                          break;
                case '-': value = pop();
                          value = pop() - value;
                          push(value);
                          break;
                case '*': value = pop();
                          value = pop() * value;
                          push(value);
                          break;
                case '/': value = pop();
                          value = pop() / value;
                          push(value);
                          break;
                case '=': value = pop();
                          make_empty();
                          return value;
                case ' ': break;
                default: exit(0);
            }
        expression++;
    }
}





