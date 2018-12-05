#include <stdio.h>
#include <ctype.h>
#include "func.h"

#define N 100

int compute_vowel_count(const char *sentence);
// void read_sentence(char sentence[], int n);

int main(void)
{
   char sentence[N+1];

   printf("Enter a sentence: ");
   read_line(sentence, N);

   printf("Your sentence contains %d vowels\n", compute_vowel_count(sentence));

   return 0;
}

//void read_sentence(char sentence[], int n)
//{
//    for (int i = 0; i < n; i++) {
//        *sentence = getchar();
//        if (*sentence++ == '\n') break;
//    }
//
//    *sentence = '\0';
//}

int compute_vowel_count(const char *sentence)
{
    int sum = 0;
    char vowel[] = "AEIOU";
    char *p;

    while (*sentence) {
        p = vowel;
        while (*p) {
            if (*p == toupper(*sentence)) {
            sum += 1;
            break;
            }
            p++;
        }
        sentence++;
    }
    return sum;
}

