#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN+12];
    char day_str[12], msg_str[MSG_LEN+1];          //day_str 共要8个字符,一个空字符
    int day, month, i, j, hour, minutes, num_remind = 0;

    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day and reminder: ");
        scanf("%2d", &month);  //输入日期,时间
        if (month == 0) break;
        scanf("/ %2d", &day);
        scanf("%2d : %2d", &hour, &minutes);  //输入日期,时间
        sprintf(day_str, "%2d/%2.2d %2d:%2.2d", month, day, hour, minutes);                    //读取日期
        read_line(msg_str, MSG_LEN);                     //读取信息
        if ((day < 1 || day > 30) 
                || (month < 0 || month > 12)
                || (hour < 0 || hour > 23) 
                || (minutes < 0 || minutes > 59)) {
            printf("Wrong time\n");
            continue;
        }
        for (i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0) break;
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j-1]);

        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
        if (i < n) str[i++] = ch;
    str[i] = '\0';
    return i;
}

