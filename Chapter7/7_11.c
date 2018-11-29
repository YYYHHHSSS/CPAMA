#include <stdio.h>
// #include <ctype.h>

int main(void)
{
    char c, f;

	printf("Enter a first and last name: ");	
    scanf(" %c", &f);                 // 表明scanf在读取一个字符常量后，之后的输入不会读取
    
    while ((c = getchar()) != '\n')         // 将输入持续读入的循环
        if (c == ' ')                        // 将输入过滤，即读取空格之后的字符
        {
            // printf("%c", toupper(' '));      此函数的运行结果表明空格的大写字符是其本身！
            while ((c = getchar()) != '\n') printf("%c", c);
            printf(", %c\n", f);
            break;
        }

	return 0;
}


