#include <stdio.h>
#define TAX_PERCENTAGE 5.0f/100.0f

int main(void) {
    float amount, amount_with_tax;

    printf("Enter an amount: ");
    scanf("%f.2", &amount);

    amount_with_tax = amount + amount * TAX_PERCENTAGE;

    printf("Amount with tax: %.2f\n", amount_with_tax);

    return 0;
}