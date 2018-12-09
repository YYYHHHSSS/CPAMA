#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("Enter a char: ");
    scanf(" %c", &ch);

    if (isdigit(ch))
        printf("%c is a digit\n", ch);
    else
        printf("%c is not a digit\n", ch);

    return 0;
}
