#include <stdio.h>

int main(void)
{
	float amount_loan, rate, monthly_payment, balance_remaing_f, balance_remaing_s, balance_remaing_t;

	printf("Enter amount of loan:");
	scanf("%f", &amount_loan);
	printf("Enter interest rate:");
	scanf("%f", &rate);
	printf("Enter monthly payment:");
	scanf("%f", &monthly_payment);

	balance_remaing_f = amount_loan * (1 + rate / 100 / 12 ) - monthly_payment;
	balance_remaing_s = balance_remaing_f * (1 + rate / 100 / 12) - monthly_payment;
	balance_remaing_t = balance_remaing_s * (1 + rate / 100 / 12) - monthly_payment;

	printf("Balance remaining after first payment: %.2f\n", balance_remaing_f);
	printf("Balance remaining after second payment: %.2f\n", balance_remaing_s);
	printf("Balance remaining after third payment: %.2f\n", balance_remaing_t);

	return 0;
}

	


