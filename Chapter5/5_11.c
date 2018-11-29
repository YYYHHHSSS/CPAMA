#include <stdio.h>

int main(void)
{
	int a;
	printf("Enter a two-digit number: ");	
	scanf("%d", &a);

	switch (a / 10) 
	{
		case 9:
			printf("You entered the number ninety");
		case 8:
			printf("You entered the number eighty");
			break;
		case 7:
			printf("You entered the number seventy");
			break;
		case 6:
			printf("You entered the number sixty");
			break;
		case 5:
			printf("You entered the number fifty");
			break;
		case 4:
			printf("You entered the number forty");
			break;
		case 3:
			printf("You entered the number thirty");
			break;
		case 2:
			printf("You entered the number twenty");
			break;
		default:
			switch (a % 10)
			{
				case 9:
				printf("You entered the number nineteen.");
				return 0;
				case 8:
				printf("You entered the number eighteen.");
				return 0;
				case 7:
				printf("You entered the number seventeen.");
				return 0;
				case 6:
				printf("You entered the number sixteen.");
				return 0;
				case 5:
				printf("You entered the number fifteen.");
				return 0;
				case 4:
				printf("You entered the number fourteen.");
				return 0;
				case 3:
				printf("You entered the number thirteen.");
				return 0;
				case 2:
				printf("You entered the number twelve.");
				return 0;
				case 1:
				printf("You entered the number eleven.");
				return 0;
				default:
				printf("You entered the number ten.");
				return 0;
			}
	}

	switch (a % 10)
	{
		case 0:
		break;
		case 1:
		printf("-one.");
		break;
		case 2:
		printf("-twe.");
		break;
		case 3:
		printf("-three.");
		break;
		case 4:
		printf("-four.");
		break;
		case 5:
		printf("-five.");
		break;
		case 6:
		printf("-six.");
		break;
		case 7:
		printf("-seven.");
		break;
		case 8:
		printf("-eight.");
		break;
		case 9:
		printf("-nine.");
		break;
	}

	return 0;
}

