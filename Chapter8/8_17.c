#include <stdio.h>

int main(void)
{
    int n, j, k, a, b;
	printf("This program creates a magic square of a specified size.\n");	
    printf("The size must be an odd number between 1 an 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int magic_sq[n][n];          // 变长数组无法初始

    for (int x = 0; x < n; x++)
        for (int y = 0; y < n; y++)
            magic_sq[x][y] = 0;

    j = 0;                               // 将1～n×n个数值放入幻方中的位置初始
    k = n / 2;
    for (int i = 0; i < n * n; i++)
    {
        magic_sq[j--][k++] = i + 1;      // 根据规则将数值赋值给幻方的元素
        a = j;                           // 记录下一个数的位置，保证元素绕回后，但当前元素非零，可以正常回退
        b = k;
        if (j < 0)
            j = j + n;
        if (k == n)
            k = n - k;
        if (magic_sq[j][k] != 0)         // 如果下一个元素位置上有数值，则回退到前一个元素的正下方
        {
            j = a + 2;
            k = b - 1;
        }
    }

    for (int x = 0; x < n; x++)
    {
        printf("\n");
        for (int y = 0; y < n; y++)
            printf("%3d", magic_sq[x][y]);
    }
    printf("\n");

                        
	return 0;
}

