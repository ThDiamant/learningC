#include <stdio.h>

int main(void)
{
    int numerator, denominator;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    // Compute GCD
    int n, m, tmp, remainder;
    n = numerator;
    m = denominator;
    if (n > m){
        tmp = m;
        m = n;
        n = tmp;
    }

    while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }
    // m is the GCD

    printf("In lowest terms: %d/%d\n", numerator / m, denominator / m);

    return 0;
}