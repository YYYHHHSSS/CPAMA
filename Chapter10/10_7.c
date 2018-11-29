#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 10

// 记录所有数字的输出形式信息
const int segments[10][9] = {{0, 1, 0, 1, 0, 1, 1, 1, 1}, {0, 0, 0, 0, 0, 1, 0, 0, 1}, {0, 1, 0, 0, 1, 1, 1, 1}, {0, 1, 0, 0, 1, 1, 0, 1, 1}, {0, 0, 0, 1, 1, 1, 0, 0, 1}, {0, 1, 0, 1, 1, 0, 0, 1, 1}, {0, 1, 0, 1, 1, 0, 1, 1, 1}, {0, 1, 0, 0, 0, 1, 0, 0, 1}, {0, 1, 0, 1, 1, 1, 1, 1, 1}, {0, 1, 0, 1, 1, 1, 0, 1, 1}};

char digits[3][MAX_DIGITS*4];

void clear_digits_array(void);
void process_digits(int digit[], int position);
void print_digits_array(void);

int main(void)
{
    char num;
    int digit[9];
    int position = 0;

    printf("Enter a number: ");

    clear_digits_array();

    while ((num = getchar()) != '\n')
    {
        if (47 < num && num < 58)
        {
            for (int i = 0; i < 9; i++)
                digit[i] = segments[num-48][i]; // 将数组segments中单个数字的信息保存数组digit中

            process_digits(digit, position);
            position++;
        }
    }

    print_digits_array();

    return 0;
}


void clear_digits_array(void)
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < MAX_DIGITS * 4; j++)
            digits[i][j] = ' ';
}

void process_digits(int digit[], int position)
{
    char _digit[3][3] = {{' ', '_', ' '}, {'|', '_', '|'}, {'|', '_', '|'}}; // 将字符8的输出形式保存在数组_digit中。

    for (int i = 0; i < 3; i++)             // 将digit中记录的数值信息，输入至_digit中
        for (int j = 0; j < 3; j++)
        {
            if (digit[j+i*3] == 0)
                _digit[i][j] = ' ';
            digits[i][j+position*4] = _digit[i][j]; 
        }
}

void print_digits_array(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < MAX_DIGITS * 4; j++)
            printf("%c", digits[i][j]);
    }
}

