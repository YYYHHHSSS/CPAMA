#include <stdio.h>

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

int main(void)
{
    int n;
    printf("This program creates a magic square of a specified size.\n");	
    printf("The size must be an odd number between 1 an 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int magic_sq[n][n];          // 变长数组无法初始

    for (int x = 0; x < n; x++)
        for (int y = 0; y < n; y++)
            magic_sq[x][y] = 0;

    create_magic_square(n, magic_sq);
    print_magic_square(n, magic_sq);

    return 0;
}


void create_magic_square(int n, int magic_square[n][n])
{
    int _x, _y, a, b;
    _x = 0;                               // 将1～n×n个数值放入幻方中的位置初始
    _y = n / 2;
    for (int i = 0; i < n * n; i++)
    {
        magic_square[_x--][_y++] = i + 1;      // 根据规则将数值赋值给幻方的元素
        a = _x;                           // 记录下一个数的位置，保证元素绕回后，但当前元素非零，可以正常回退
        b = _y;
        if (_x < 0)
            _x = _x + n;
        if (_y == n)
            _y = n - _y;
        if (magic_square[_x][_y] != 0)         // 如果下一个元素位置上有数值，则回退到前一个元素的正下方
        {
            _x = a + 2;
            _y = b - 1;
        }
    }
}

void print_magic_square(int n, int magic_square[n][n])
{

    for (int x = 0; x < n; x++)
    {
        printf("\n");
        for (int y = 0; y < n; y++)
            printf("%3d", magic_square[x][y]);
    }
    printf("\n");
}
