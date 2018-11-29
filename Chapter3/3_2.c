#include <stdio.h>

int main(void)
{
	
	int item_nu, mm, dd, yyyy;
	float unit_price;
	printf("Enter item number:");
	scanf("%d", &item_nu);
	printf("Enter unit price:");
	scanf("%f", &unit_price);
	printf("Enter purchase date (mm/dd/yyyy):");
	scanf("%d/%d/%d", &mm, &dd, &yyyy); 
	printf("Item\tUnit    \tPurchase\n\tPrice   \tDate\n%-4d\t$%7.2f\t%d/%d/%d\n", item_nu, unit_price, mm, dd, yyyy);


	return 0;
}
