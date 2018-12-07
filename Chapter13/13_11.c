#include <stdio>

double compute_average_word_length(const char *sentence);

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





