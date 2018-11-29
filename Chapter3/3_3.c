#include <stdio.h>

int main(void)
{
	int GS1_prefix, Group_identifier, Publisher_code, Item_number, Check_digit;
	
	printf("Enter ISBN:");
	scanf("%d-%d-%d-%d-%d", &GS1_prefix, &Group_identifier, &Publisher_code, &Item_number, &Check_digit);	
	printf("GS1 prefix:%d\nGroup identified:%d\nPublisher code:%d\nItem number:%d\nCheck digit:%d\n", 
			GS1_prefix, Group_identifier, Publisher_code, Item_number, Check_digit);

	return 0;
}
		

	
