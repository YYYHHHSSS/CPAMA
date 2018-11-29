#include <stdio.h>
#define N 5

int main(void)
{
    int a[N][N], sum_row = 0, sum_column = 0;
    
    for (int i = 0; i < N; i++)
    {
        printf("Enter row %d:", i + 1);	
        for (int j = 0; j < N; j++)
            scanf("%d", &a[i][j]);
    }

    printf("Row totals: ");
    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
            sum_row += a[i][j];
        printf("%3d", sum_row);
        sum_row = 0;
    }

    printf("\nColumn totals: ");
    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
            sum_column += a[j][i];
        printf("%3d", sum_column);
        sum_column = 0;
    }
        
	return 0;
}

