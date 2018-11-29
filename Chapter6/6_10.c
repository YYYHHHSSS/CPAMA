#include <stdio.h>

int main(void)
{
	int m1, m2, d1, d2, y1, y2;
	printf("Enter a date (mm/dd/yy): ");	
	scanf("%d/%d/%d", &m1, &d1, &y1);
    
    for (; ;)
    {
        printf("Enter a date (mm/dd/yy): ");	
        scanf("%d/%d/%d", &m2, &d2, &y2);

        if (y2 == 0 && d2 == 0 && m2 == 0)
            break;
        
        if (y1 != y2)
        {
            if (y2 < y1)
            {
                y1 = y2;
                d1 = d2;
                m1 = m2;
            }
        }
        else if (m1 != m2)
        {
            if (m2 < m1)
            {
                d1 = d2;
                m1 = m2;
            }
        }
        else
            if (d2 < d1)
                d1 = d2;
    }

    printf("%d/%d/%.2d is the earliest date\n", m1, d1, y1);


	return 0;
}

