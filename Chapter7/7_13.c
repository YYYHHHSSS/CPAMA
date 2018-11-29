#include <stdio.h>

int main(void)
{
    char c;
    int i = 0, n = 0;

	printf("Enter a sentence: ");	
    //  过滤字符流里的某个字符
    while ((c = getchar()) != '\n')
    {
        //  按题意字符'.'不应该过滤掉，这里从实际角度出发，保证了程序的一般性。
        if (c == ' ' || c == '.')      // 注意这里不能使用getchar()函数，否则将消耗掉字符流中的下一个字符。
        {
            n++;
            continue;
        }
        i++;
    }
    //////////////////////////////////////

    printf("i = %d\nn = %d\n", i, n);
    printf("Value of expression: %.1f\n", (float) i / n);
            


	return 0;
}

