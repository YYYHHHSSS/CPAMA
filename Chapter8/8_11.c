#include <stdio.h>

int main(void)
{
    char a[14];


    printf("Enter phone number: ");
    for (int i = 0; i < 14; i++)
        scanf("%c", &a[i]);

    printf("In numberic form: ");
    for (int i = 0; i < 14; i++)
    {
        if ('A' <= a[i] && a[i] <= 'C')
            printf("2");
        else if ('D' <= a[i] && a[i] <= 'F')
            printf("3");
        else if ('G' <= a[i] && a[i] <= 'I')
            printf("4");
        else if ('J' <= a[i] && a[i] <= 'L')
            printf("5");
        else if ('M' <= a[i] && a[i] <= 'O')
            printf("6");
        else if ('P' <= a[i] && a[i] <= 'S')
            printf("7");
        else if ('T' <= a[i] && a[i] <= 'V')
            printf("8");
        else if ('W' <= a[i] && a[i] <= 'Z')
            printf("9");
        else
            printf("%c", a[i]);
    }
        
    printf("\n");

	return 0;
}


