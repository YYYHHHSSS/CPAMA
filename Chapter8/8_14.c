#include <stdio.h>
#define N 100


int main(void)
{
    int w_start = 0, w_end;     ///////这里声明有歧义，在下述函数体中，w_start应该与w_end调换位置。
    char w, sen[N];

	printf("Enter a sentence: ");	
    while (w_start < N)
    {
        scanf("%c", &sen[w_start]);
        if (sen[w_start] == '.' || sen[w_start] == '?' || sen[w_start] == '!')
            break;
        w_start++;
    }

    w = sen[w_start];
    printf("Reversal of sentence: ");
    for (w_end = w_start - 1; w_end >= 0; w_end--)             // 反向查找数组
    {
        if (sen[w_end] == ' ')                      // 确定单词的起始位置
        {
            for(int k = w_end + 1; k < w_start; k++)        //将单词反向打印出来
                printf("%c", sen[k]);
            printf("%c", sen[w_end]);               
            w_start = w_end;                             // 将单词的起始位置，转化为下一个单词的结束位置
        }
    }

    for (int m = 0; m < w_start; m++)
        printf("%c", sen[m]);
    printf("%c", w);

	return 0;
}

