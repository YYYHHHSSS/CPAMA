#include <stdio.h>
#include <string.h>

                               
int main(void)
{
    char *less_than_twenty[] = {"ten", "eleven", "twelve", "thirteen",
                                "fourteen", "fifteen", "sixteen",
                                "seventeen", "eighteen", "nineteen"};
    char *ten_digits[] = {"twenty", "thirty", "forty", "fifty",
                            "sixty", "seventy", "eighty", "ninety"};
    char *single_digits[] = {"one", "two", "three", "four", "five",
                             "six", "seven", "eight", "nine"};

    int n;

    for (;;) {
        printf("Enter a two-digit number: \n");
        scanf("%2d", &n);

        if (n / 10 == 1)
            printf("You entered the number %s\n", less_than_twenty[n%10]);
        else if (n / 10 > 1)
            printf("You entered the number %s-%s\n", ten_digits[n/10-2], single_digits[n%10-1]);
        else {
            printf("Not this number.\n");
            break;
        }
    }

    return 0;
}





