#include <stdio.h>

int main(void)
{
    int i, code;
    struct dialing_code {
        char *country;
        int code;
    };

    const struct dialing_code country_codes[] = {
        {"Argentina", 54}, {"Bangladesh", 880}, {"Brazil", 55},
        {"Burma (Myanmar)", 95}, {"China", 86}, {"Colombia", 57},
        {"Congo, Dem, Rep, of", 243}, {"Egypt", 20}, {"Ethiopia", 251},
        {"France", 33}, {"Germany", 49}, {"India ", 91}, 
        {"Indonesia", 62}, {"Iran", 98}, {"Italy", 39},
        {"Japan", 81}, {"Mexico", 52}, {"Nigeria", 234},
        {"Pakistan", 92}, {"Philippines", 63}, {"Poland", 48},
        {"Russia", 7}, {"South Afirca", 27}, {"Korea", 82},
        {"Spain", 34}, {"Sudan", 249}, {"Thailand", 66},
        {"Turkey", 90}, {"Ukraine", 380}, {"United Kingdom", 44},
        {"United States", 1}, {"Vietnam", 84}
    };

    puts("Enter the code.");
    scanf("%d", &code);

    for (;;) {
        if (code == 0) break;
        for (i = 0; i < 32; i++) {
            if (country_codes[i].code == code) {
                printf("The country is %s.\n", country_codes[i].country);
                break;
            }
        }
        if (i == 32) puts("You enter wrong code.");
        puts("Enter the code.");
        scanf("%d", &code);
    }

    return 0;
}
