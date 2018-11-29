#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define W 26
#define N 10

int main(void)
{
    char point[N][N], words[W];
    bool step_l, step_r, step_u, step_d;

    srand((unsigned) time(NULL));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            point[i][j] = '.';
    
    for (int i = 0; i < W; i++)
        words[i] = 'A' + i;


    int m = 0, n = 0;
    point[0][0] = words[0];
    for (int i = 1; i < W; i++)
    {
        // 初始化随机的方向
        step_l = false;
        step_r = false;
        step_u = false;
        step_d = false;

        for (; ;)
        {

            // 如果四个方向都无法行走，则打印数组point
            if (step_l && step_r && step_u && step_d)
            {/*{{{*/
                for (int i = 0; i < N; i++)
                {
                    printf("\n");
                    for (int j = 0; j < N; j++)
                        printf(" %c", point[i][j]);
                }
                return 0;
            }/*}}}*/

            // 生成随机的四个数，代表四个方向。 
            // 向右的走向，必须小于界限N-1,它的下一项即第N项必须不为字母。
            // 对循环（生成随机数）的控制，如果符合条件则进入下一步，如果不符合条件则重新循环（生成随机数）。
            switch (rand() % 4)
            {/*{{{*/
                case 0:
                    if (m > 0 && point[m-1][n] == '.')
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
                    if (n < N - 1 && point[m][n+1] == '.')
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
                    if (m < N - 1 && point[m+1][n] == '.')
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
                    if (n > 0 && point[m][n-1] == '.')
                    {
                        n--;
                        break;
                    }
                    else
                    {
                        step_l = true;
                        continue;
                    }
            }/*}}}*/
            // 按顺序将字母赋给下一步的元素
            point[m][n] = words[i];
            // 断开循环，并读入下一字母
            break;
        }
    }

    // 字母读完毕后，打印piont数组
    for (int i = 0; i < N; i++)
    {
        printf("\n");
        for (int j = 0; j < N; j++)
            printf(" %c", point[i][j]);
    }
            
	return 0;
}

