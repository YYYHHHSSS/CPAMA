#include <stdio.h>

int main(void)
{
	int a;

	printf("Enter numerical grade:");
	scanf("%d", &a);

	if (a > 0 && a < 100)
		switch (a / 10) 
		{
			case 10: case 9:
				printf("letter grade: a");
				break;
			case 8:
				printf("letter grade: b");
				break;
			case 7:
				printf("letter grade: c");
				break;
			case 6:
				printf("letter grade: d");
				break;
			case 5: case 4: case 3: case 2: case 1: case 0:
				printf("letter grade: f");
				break;
			default:
				printf("you enter a wrong grade!");
				break;
		}
	else
		printf("you enter a wrong grade!");

	return 0;
}

