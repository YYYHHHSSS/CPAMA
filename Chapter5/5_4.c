#include <stdio.h>

int main(void)
{
	int speed;
	printf("Enter the speed of wind: ");
	scanf("%d", &speed);

	if (speed > 63) printf("This is Hurricane.");
	else if (speed > 48) printf("This is Storm.");
	else if (speed > 28) printf("This is Gale.");
	else if (speed > 4) printf("This is Breeze.");
	else if (speed > 1) printf("This is Light air.");
	else printf("Calm.");
	
	return 0;
}

