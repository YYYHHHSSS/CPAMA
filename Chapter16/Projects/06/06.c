#include <stdio.h>
#include "funcOfDate.h"

int main(void)
{
    struct date d1, d2;

    printf("Enter first date (mm/dd/yy): ");
    scanf(" %d / %d / %d", &d1.month, &d1.day, &d1.year);
    printf("Enter second date (mm/dd/yy): ");
    scanf(" %d / %d / %d", &d2.month, &d2.day, &d2.year);

    if (compare_dates(d1, d2))
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", d2.month, d2.day, d2.year, d1.month, d1.day, d1.year);
    else
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);

    return 0;
}
