#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(int point);

int main(void)
{
    char yes_or_no;
    int win_nu = 0, loss_nu = 0, roll_nu;
    bool result;

    srand((unsigned) time(NULL));

    for(; ;)
    {
        roll_nu = roll_dice();

        result = play_game(roll_nu);
        printf("\n");

        if (result)
            win_nu++;
        else
            loss_nu++;

        printf("\nPlay agin? ");	
        scanf("%c", &yes_or_no);
        getchar();                    // 捕捉字符‘\n',并抛弃，避免在下次循环时，scanf语句直接调用字符
        printf("\n");

        if (yes_or_no == 'n')
            break;
    }

    printf("Wins: %d", win_nu);
    printf("\tLosses: %d\n", loss_nu);

    return 0;
}

int roll_dice(void)
{
    int point = 0;


    for(int i = 0; i < 2; i++)
        point += rand() % 6 + 1;
            
    return point;
}

bool play_game(int point)
{
    int tar;
    switch (point)
    {
        case 7: case 11:
            printf("You rolled: %d\n", point);
            printf("You win!");
            return true;
        case 2: case 3: case 12:
            printf("You rolled: %d\n", point);
            printf("You lose!");
            return false;
        default:
            printf("You rolled: %d\n", point);
            printf("Your point is %d\n", point);
            break;
    }

    for (; ;)
    {
        tar = roll_dice();
        printf("You rolled: %d\n", tar);
        if (tar == point)
        {
            printf("You win!");
            return true;
        }
        else if (tar == 7)
        {
            printf("You lose!");
            return false;
        }
    }
}




