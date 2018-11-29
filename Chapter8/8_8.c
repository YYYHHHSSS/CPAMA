#include <stdio.h>
#define N 5

int main(void)
{
    int a[N][N], sum_row = 0, sum_column = 0, high = 0, low = 100;
    
    for (int i = 0; i < N; i++)
    {
        printf("Enter student %d scores:", i + 1);	
        for (int j = 0; j < N; j++)
            scanf("%d", &a[i][j]);
    }

    for (int i = 0; i < N; i++)
    {
        printf("Student %d:", i + 1);
        for(int j = 0; j < N; j++)
            sum_row += a[i][j];
        printf("Total scores %3d", sum_row);
        printf("Average scores %7.2f\n", (float)sum_row / N);
        sum_row = 0;
    }

    for (int i = 0; i < N; i++)
    {
        printf("\nTest %d: ", i + 1);
        for(int j = 0; j < N; j++)
        {
            sum_column += a[j][i];
            if (a[j][i] > high)
                high = a[j][i];
            if (a[j][i] < low)
                low = a[j][i];
        }
        printf("%7.2f      %d      %d", (float)sum_column / N, high, low);
        sum_column = 0;
    }
        
	return 0;
}


