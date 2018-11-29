#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
    int a[6], m, n;
    int *largest = &m, *second_largest = &n;

    printf("Enter 6 number: ");

    for (int i = 0; i < 6; i++)
        scanf("%d", &a[i]);

    find_two_largest(a, 6, largest, second_largest);

    printf("The largest number is %d, the second_largest number is %d", *largest, *second_largest);



    return 0;
}


void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i, d;
    *largest = a[0];
    *second_largest = a[0];

    for (i = 0; i < n; i++)
        if (*largest < a[i])
        {
            *largest = a[i];
            d = i;
        }

    for (i = 0; i < n; i++)
        if (*second_largest < a[i] && i != d)
            *second_largest = a[i];
}

