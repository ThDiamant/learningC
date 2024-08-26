#include <stdio.h>

int main(void)
{
    float val, expr1, expr2;

    printf("Please enter a number: ");
    scanf("%f.2", &val);

    expr1 = 3 * (val * val * val * val * val) + 2 * (val * val * val * val) - 5 * (val * val * val) - val * val + 7 * val - 6;
    expr2 = ((((3 * val + 2) * val - 5) * val - 1) * val + 7) * val - 6;

    printf("Equation value for the input number: %.2f\n", expr1);
    printf("Equation value for the input number (Horner's Rule): %.2f\n", expr2);

    return 0;
}