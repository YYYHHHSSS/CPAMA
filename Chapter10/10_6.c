#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void); 
void stack_underflow(void);

int main(void)
{
    int c, d;
    char Nu_or_Symbol;

    printf("Enter an RPN expression: ");
    scanf(" %c", &Nu_or_Symbol);

    for(; ;)
    {
        switch (Nu_or_Symbol)
        {
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case '0':
                push(Nu_or_Symbol - 48);
                printf("%-3d", top);
                printf("Value of expression: %d\n", contents[top]);
                break;
            case '+':
                c = pop();
                d = pop();
                push(c + d);
                printf("Value of top: %d\n", top);
                break;
            case '-':
                c = pop();
                d = pop();
                push(c - d);
                printf("Value of top: %d\n", top);
                break;
            case '*':
                c = pop();
                d = pop();
                push(c * d);
                printf("Value of top: %d\n", top);
                break;
            case '/':
                c = pop();
                d = pop();
                push(c / d);
                printf("Value of top: %d\n", top);
                break;
            case '=':
                printf("Value of expression: %d\n", contents[--top]);
                printf("Enter an RPN expression: ");
                make_empty();
                break;
            default:
                exit(EXIT_SUCCESS);
        }

        scanf(" %c", &Nu_or_Symbol);
    }

    return 0;
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void)
{
    printf("Expression is too complex.\n");
    exit(EXIT_SUCCESS);
}

void stack_underflow(void)
{
    printf("Not enough operands in expression.\n");
    exit(EXIT_SUCCESS);
}


