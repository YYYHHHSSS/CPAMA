#include <stdio.h>

#define N 100

void selection_sort(int a[], int n);

int main(void)
{
    int n = 0, a[N];

    printf("Enter some number and enter '0' to quit.\n");
    printf("Your number is: ");
    while (n < N)
    {
        scanf("%d", &a[n]);
        if (a[n] == 0)
            break;
        n++;
    }

    selection_sort(a, n);

    printf("Now the number is sorted: ");
    for (int i = 0; i < n; i++)
        printf("%4d", a[i]);	
    printf("\n");

    return 0;
}

void selection_sort(int a[], int n)
{
    int max = a[0], nu_max;

    for (int i = 1; i < n; i++)         // 寻找最大值
        if (max < a[i])
            max = a[i];

    for (int i = 0; i < n; i++)        // 寻找最大值对应的下标
        if (max == a[i])
            nu_max = i;

    for (int i = nu_max; i < n - 1; i++) //将最大元素之后的元素提前一位
        a[i] = a[i+1];

    a[n-1] = max;                       // 将最大元素放置最后一位

    if (n != 0)
        selection_sort(a, n-1);         // 递归处理下n-1位元素
}

