#include <stdio.h>

int main(void)
{
	float amount_loan, rate, monthly_payment, remaining_n;
    int n;

	printf("Enter amount of loan:");
	scanf("%f", &amount_loan);
	printf("Enter interest rate:");
	scanf("%f", &rate);
	printf("Enter monthly payment:");
	scanf("%f", &monthly_payment);
    printf("Enter the number of month:");
    scanf("%d", &n);

    remaining_n = amount_loan;
    for (int i = 1; i <= n; i++)
        remaining_n = remaining_n * (1 + rate / 100 / 12) - monthly_payment;

	printf("Balance remaining after first payment: %.2f\n", remaining_n);

	return 0;
}

	



