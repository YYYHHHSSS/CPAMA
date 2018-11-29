#include <stdio.h>
#include <ctype.h>


int main(void)
{
    int i = 0;
    char c;

	printf("Enter a sentence: ");	
    
    while ((c = getchar()) != '\n')
    {
        switch (toupper(c))
        {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                i++;
                break;
            default:
                break;
        }
    }

    printf("Your sentence contains %d vowels.", i);

	return 0;
}

