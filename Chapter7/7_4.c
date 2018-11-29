#include <stdio.h>

int main(void)
{
    char a;

    printf("Enter phone number: ");
    do 
    {
        a = getchar();
        if ('A' <= a && a <= 'C')
            printf("2");
        else if ('D' <= a && a <= 'F')
            printf("3");
        else if ('G' <= a && a <= 'I')
            printf("4");
        else if ('J' <= a && a <= 'L')
            printf("5");
        else if ('M' <= a && a <= 'O')
            printf("6");
        else if ('P' <= a && a <= 'S')
            printf("7");
        else if ('T' <= a && a <= 'V')
            printf("8");
        else if ('W' <= a && a <= 'Z')
            printf("9");
        else
            printf("%c", a);
    }
    while (a != '\n');
        

	return 0;
}

