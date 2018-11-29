// tar:输入月、日、年计算出该日期是当年的第几天，选择1-366中的整数。
// date:2018年 04月 15日 星期日 22:46:31 CST

#include <stdio.h>

int Date(int month, int day, int year);

int main(void)
{
    int month, day, year;

    printf("Enter the date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("The day is %d day of this year.", Date(month, day, year));

    return 0;
}

int Date(int month, int day, int year)
{
    int n = 0;

    switch (month)
    {
        case 12: n += 30;
        case 11: n += 31;
        case 10: n += 30;
        case 9: n += 31;
        case 8: n += 30;
        case 7: n += 31;
        case 6: n += 30;
        case 5: n += 31;
        case 4: n += 30;
        case 3: 
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                    n += 29;
                else
                    n += 28;
        case 2: n += 31;
        case 1: n += day;
    }

    return n;
}
