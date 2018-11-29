#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int a, b;
    char c;

	printf("Enter a 12-hour time: ");	
	scanf("%d:%d %c", &a, &b, &c);
    getchar();

    if (toupper(c) == 'P')
        a = a + 12;

    printf("Equivalent 24-hour time: %d:%.2d\n", a, b);

	return 0;
}



