struct date {
    int month, day, year;
};

int day_of_year(struct date d)
{
    switch (d.month) {
        case 12: d.day += 30;
        case 11: d.day += 31;
        case 10: d.day += 30;
        case 9: d.day += 31;
        case 8: d.day += 31;
        case 7: d.day += 30;
        case 6: d.day += 31;
        case 5: d.day += 30;
        case 4: d.day += 31;
        case 3: 
                if (d.year % 100 != 0 && d.year % 4 == 0 || d.year % 400 == 0) d.day += 1;
                d.day += 28;
        case 2: d.day += 31;
        default: d.day;
    }
    return d.day;
}
                
int compare_dates(struct date d1, struct date d2)
{
    if (d1.year == d2.year && d1.month == d2.month && d1.day== d2.day) return 0;
    else if (d1.year < d2.year || (d1.year == d2.year && d1.month < d2.month) || (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day)) return -1;
    else return 1;
}

