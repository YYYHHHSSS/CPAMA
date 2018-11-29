#include <stdio.h>

int main(void)
{
	int i;
	
	printf("Enter a number: ");	
	scanf("%4d", &i);
	
	if (i > 99) printf("The number %d has 3 digits\n", i);
	else if (i > 9) printf("The number %d has 2 digits\n", i);  
	else printf("The number %d has 1 digits\n", i);

	return 0;
}

