#include <stdio.h>

struct time {
    int departure_time, arriving_time;
};

int myabs(int a, int b)
{
    return a > b ? a - b : b - a;
}

int main(void)
{
    const struct time time_list[] = {
        {480, 616}, {583, 712}, {679, 811}, {767, 900},
        {840, 968}, {945, 1075}, {1140, 1280}, {585, 718}
    };
    int hour, minute, wish_time, i;

    printf("Enter a 24-hour time: ");
    scanf(" %d : %d", &hour, &minute);
    wish_time = hour * 60 + minute;

    for (i = 0; i < 8; i++) 
        if (wish_time < time_list[i].departure_time) { 
            if (i != 0) 
                i = myabs(wish_time, time_list[i].departure_time) < myabs(wish_time, time_list[i-1].departure_time) ? i : i - 1;
            break;
        }

    if (i == 0) 
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    else if (i == 8)
        printf("Closest departure time is 9:45 a.m., arriving at 11:58 p.m.\n");
    else {
        if (time_list[i].departure_time / 60 > 12)
            printf("Closest departure time is %.2d:%.2d p.m., ", time_list[i].departure_time / 60 - 12, time_list[i].departure_time % 60);
        else
            printf("Closest departure time is %.2d:%.2d a.m., ", time_list[i].departure_time / 60, time_list[i].departure_time % 60);

        if (time_list[i].arriving_time / 60 > 12)
            printf("arriving at %.2d:%.2d p.m.\n", time_list[i].arriving_time / 60 - 12, time_list[i].arriving_time % 60);
        else
            printf("arriving at %.2d:%.2d a.m.\n", time_list[i].arriving_time /60, time_list[i].arriving_time % 60);
    }

    return 0;
}
