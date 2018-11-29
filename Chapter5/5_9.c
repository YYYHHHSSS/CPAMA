#include <stdio.h>

int main(void)
{
	int m1, m2, d1, d2, y1, y2;
	printf("Enter first date (mm/dd/yy): ");	
	scanf("%d/%d/%d", &m1, &d1, &y1);
	printf("Enter second date (mm/dd/yy): ");	
	scanf("%d/%d/%d", &m2, &d2, &y2);

	if (y1 != y2)
	{
		if (y1 < y2)
		{
			printf("%d/%d/%.2d ", m1, d1, y1);
			printf("is earlier than ");
			printf("%d/%d/%.2d ", m2, d2, y2);
		}
		else
		{	printf("%d/%d/%.2d ", m2, d2, y2);
			printf("is earlier than ");
			printf("%d/%d/%.2d ", m1, d1, y1);
		}
	}
	else if (m1 != m2)
	{
		if (m1 < m2)
		{
			printf("%d/%d/%.2d ", m1, d1, y1);
			printf("is earlier than ");
			printf("%d/%d/%.2d ", m2, d2, y2);
		}
		else
		{
			printf("%d/%d/%.2d ", m2, d2, y2);
			printf("is earlier than ");
			printf("%d/%d/%.2d ", m1, d1, y1);
		}
	}
	else if (d1 != d2)
	{
		if (d1 < d2)
		{
			printf("%d/%d/%.2d ", m1, d1, y1);
			printf("is earlier than ");
			printf("%d/%d/%.2d ", m2, d2, y2);
		}
		else
		{
			printf("%d/%d/%.2d ", m2, d2, y2);
			printf("is earlier than ");
			printf("%d/%d/%.2d ", m1, d1, y1);
		}
	}
	else
		printf("It can't be!");
			


	return 0;
}

