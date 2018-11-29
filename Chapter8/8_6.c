#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int n = 0;
    char a[100], c;        // 将数组a的长度设置为100,是一种妥协，希望能找到更好的办法来指定其长度

	printf("Enter message: ");	
    while ((c = getchar()) != '\n')
    {
        a[n] = toupper(c);
        n++;
    }

    for (int i = 0; i < n; i++)
        switch (a[i])
        {
            case 'A': a[i] = '4';
                      break;
            case 'B': a[i] = '8';
                      break;
            case 'E': a[i] = '3';
                      break;
            case 'I': a[i] = '1';
                      break;
            case 'O': a[i] = '0';
                      break;
            case 'S': a[i] = '5';
                      break;
        }
    
    printf("\nIn BIFF-speak: ");
    for (int i = 0; i < n; i++)
        printf("%c", a[i]);
    printf("!!!!!!!!!!\n");

	return 0;
}



