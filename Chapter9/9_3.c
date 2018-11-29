#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char walk[][10]);
void print_array(char walk[][10]);

int main(void)
{
    char walk[10][10];

    generate_random_walk(walk);

    print_array(walk);
            
	return 0;
}


void generate_random_walk(char walk[][10])
{
    char words[26];
    bool step_l, step_r, step_u, step_d;
    srand((unsigned) time(NULL));

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            walk[i][j] = '.';
    
    for (int i = 0; i < 26; i++)
        words[i] = 'A' + i;


    int m = 0, n = 0;
    walk[0][0] = words[0];
    for (int i = 1; i < 26; i++)
    {
        // 初始化随机的方向
        step_l = false;
        step_r = false;
        step_u = false;
        step_d = false;

        for (; ;)
        {

            // 如果四个方向都无法行走，则返回函数
            if (step_l && step_r && step_u && step_d)
                return;

            // 在0到3四个数字中生成随机数值，代表四个方向。 
            // 向右的走向，必须小于界限10-1,它的下一项即第N项必须不为字母。
            // 对循环（生成随机数）的控制，如果符合条件则进入下一步，如果不符合条件则重新循环（生成随机数）。
            switch (rand() % 4)
            {
                case 0:
                    if (m > 0 && walk[m-1][n] == '.')
                    {
                        m--;
                        break;
                    }
                    else
                    {
                        step_u = true;
                        continue;
                    }
                case 1:
                    if (n < 10 - 1 && walk[m][n+1] == '.')
                    {
                        n++;
                        break;
                    }
                    else
                    {
                        step_r = true;
                        continue;
                    }
                case 2:
                    if (m < 10 - 1 && walk[m+1][n] == '.')
                    {
                        m++;
                        break;
                    }
                    else
                    {
                        step_d = true;
                        continue;
                    }
                case 3:
                    if (n > 0 && walk[m][n-1] == '.')
                    {
                        n--;
                        break;
                    }
                    else
                    {
                        step_l = true;
                        continue;
                    }
            }
            // 按顺序将字母赋给下一步的元素
            walk[m][n] = words[i];
            // 断开循环，并读入下一字母
            break;
        }
    }
}

void print_array(char walk[][10])
{ 
    // 字母读完毕后，打印piont数组
    for (int i = 0; i < 10; i++)
    {
        printf("\n");
        for (int j = 0; j < 10; j++)
            printf(" %c", walk[i][j]);
    }
}
