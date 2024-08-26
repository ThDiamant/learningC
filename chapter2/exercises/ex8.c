#include <stdio.h>

int main(void)
{
    float loan, interest, interest_rate, monthly_payment, balance1, balance2, balance3;

    printf("Enter amount of loan: ");
    scanf("%f.2", &loan);

    printf("Enter interest rate: ");
    scanf("%f.1", &interest);
    interest_rate = (interest / 100.0f) / 12.0f;

    printf("Enter monthly payment: ");
    scanf("%f.2", &monthly_payment);

    balance1 = loan + loan * interest_rate - monthly_payment;
    balance2 = balance1 + balance1 * interest_rate - monthly_payment;
    balance3 = balance2 + balance2 * interest_rate - monthly_payment;

    printf("Balance after first payment: %.2f\n", balance1);
    printf("Balance after second payment: %.2f\n", balance2);
    printf("Balance after third payment: %.2f\n", balance3);

    return 0;
}