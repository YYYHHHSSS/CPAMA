#include <stdio.h>

#define LENGTH_WORD 20
#define NUM_WORD 30

int main(void)
{
    char sentence[NUM_WORD][LENGTH_WORD], ch;
    int m, n;

    printf("Enter a sentence: ");
    for (m = 0; m < NUM_WORD; m++) {
        for (n = 0; n < LENGTH_WORD; n++) {
            sentence[m][n] = getchar();
            if (sentence[m][n] == ' ' || sentence[m][n] == '?' || sentence[m][n] == '.' || sentence[m][n] == '!')
                break;
        }
        if (sentence[m][n] == '?' || sentence[m][n] == '!' || sentence[m][n] == '.') {
            ch = sentence[m][n];
            sentence[m][n] = '\0';
            break;
        }
        sentence[m][n] = '\0';
    }

    printf("Reversal of sentence: ");
    while (m != 0) {
        printf("%s", sentence[m]);
        printf(" ");
        m--;
        if (m == 0) 
            printf("%s%c\n", sentence[m], ch);
    }

    return 0;
}





        

    

    
