#include <stdio.h>
#define N 80

int main(void)
{
    char c, Message[N], W[26], w[26];
    int n, M_nu = 0, _nu;

////////////////////////////加密/////////////////////////////////////////

    printf("Enter message to be encrypted: ");
    while (M_nu < N)
    {
        c = getchar();
        Message[M_nu] = c;
        if (c == '\n')
            break;
        M_nu++;                   // M_nu记录了Message数组中非空元素的长度
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);

    for (int i = 0; i < 26; i++)  // 将大小写字母数组初始化
    {
        W[i] = 'A' + i;
        w[i] = 'a' + i;
    }

    printf("Encrypted message: ");
    for (int i = 0; i < M_nu; i++)
    {
        _nu = 0;                     // 将字母顺序初始化
        while (_nu < 26)            // 将Message中的元素与字母进行比较
        {
            if (Message[i] == W[_nu]) 
            {
                Message[i] = (W[_nu] - 'A' + n) % 26 + 'A';
                break;
            }
            else if (Message[i] == w[_nu])
            {
                Message[i] = (w[_nu] - 'a' + n) % 26 + 'a';
                break;
            }
            _nu++;
        }
        printf("%c", Message[i]);
    }
    printf("\n");


/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////解密/////////////////
// 反向输入message，并输入26与移位的差值，则进行解密！

	return 0;
}

