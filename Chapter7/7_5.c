#include <stdio.h>

int main(void)
{
    char a;
    int sum = 0;

    printf("Enter a word: ");
    while ((a = getchar()) != '\n') 
    {
        switch (toupper(a))
        {
            default:
                sum += 1;
                break;
            case 'D': case 'G':
                sum += 2;
                break;
            case 'B': case 'C': case 'M': case 'P': 
                sum += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                sum += 4;
                break;
            case 'K':
                sum += 5;
                break;
            case 'J': case 'X':
                sum += 8;
                break;
            case 'Q': case 'Z':
                sum += 10;
                break;
        }
    }
    printf("%d\n", sum);

	return 0;
}


