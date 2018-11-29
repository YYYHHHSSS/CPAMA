#include <stdio.h>
// #include <ctype.h>

int main(void)
{
    int i = 0;
    char c, e, f[20];

	printf("Enter a first and last name: ");	
    scanf(" %c", &e);    
    
    while ((c = getchar()) != '\n')      
    {
        if (c == ' ')                   
        {
            while (i < 20)
            {
                c = getchar();
                if (c == '\n')
                    break;
                f[i] = c;
                i++;
            }

            break;
        }
    }
    
    printf("You enered the name: ");
    for (int j = 0; j < i; j++)
        printf("%c", f[j]);
    printf(", %c\n", e);



	return 0;
}



