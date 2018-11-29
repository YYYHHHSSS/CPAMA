#include <stdio.h>

int main(void)
{
	int a, b, c, d, lnu, snu;
	printf("Enter four intergers: ");	
	scanf("%d%d%d%d", &a, &b, &c, &d);

	if (a > b)
	{
		lnu = a;
		snu = b;
	}
	else
	{
		lnu = b;
		snu = a;
	}
	if (lnu < c) 
		lnu = c;
	else 
		snu = c > snu ? snu : c;
	if (lnu < d) 
		lnu = d;
	else 
		snu = d > snu ? snu : d;
		
	printf("Largest: %d\nSmallest: %d\n", lnu, snu);

	return 0;
}


