#include <stdio.h>

#define N 100

void read_line(char sentence[], int n);
double compute_average_word_length(const char *sentence);

int main(void)
{
    char sentence[N+1];
    double f;

    printf("Enter a sentence: ");
    read_line(sentence, N);
    printf("Ths sentence is __%s__\n", sentence);
    f = compute_average_word_length(sentence);

    printf("Average word length: %lf\n", f);

    return 0;
}

double compute_average_word_length(const char *sentence)
{
    int n = 0, sum = 0;

    while (*sentence++) {
        if (*sentence == ' ') {
            n++;
            continue;
        }
        sum++;
    }

    return (double) sum / n;
}


void read_line(char sentence[], int n) //读取姓名，并处理名、姓及名和姓之间的空格
{
    int i = 0;
    char ch;

    while ((ch = getchar()) == ' ')
        ;
    sentence[i++] = ch;

    while ((ch != '\n') && i < n) {
        if ((ch = getchar()) == ' ') {
            sentence[i++] = ch;
            while ((ch = getchar()) == ' ')
                ;
        }
        if (i < n)
            sentence[i++] = ch;
    }

    if (sentence[i-2] == ' ')
        i -= 2;
    else if (sentence[i-1] == ' ' || sentence[i-1] == '\n')
        i--;
    
    sentence[i] = '\0';
}



