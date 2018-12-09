#include <stdio.h>

int main(void)
{
    int day, year, i;
    char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &i, &day, &year);
    printf("You entered the date %s %d, %d\n", month[i-1], day, year);

    return 0;
}
