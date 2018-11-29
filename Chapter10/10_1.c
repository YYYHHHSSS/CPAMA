#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow(void); 
void stack_underflow(void);

int main(void)
{
    char c, b;

    printf("Enter parenteses and/or braces: ");
    c = getchar();

    do
    {
        switch (c) 
        {
            case '(': case '{':
                push(c);
                break;
            case ')':
                b = '(';
                if (b != pop())
                {
                    printf("Parenteses/braces are not nested properly.");
                    return 0;
                }
                break;
            case '}':
                b = '{';
                if (b != pop())
                {
                    printf("Parenteses/braces are not nested properly.");
                    return 0;
                }
                break;
        }
        c = getchar();
    }while(c != '\n');


    if (is_empty())
        printf("Parenteses/braces are nested properly.");
    else
        printf("Parenteses/braces are not nested properly.");

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

void push(char i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

char pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void)
{
    printf("Stack overflow\n");
    return;
}

void stack_underflow(void)
{
    printf("Stack underfolw\n");
    exit(EXIT_FAILURE);
}

