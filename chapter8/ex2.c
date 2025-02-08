/* Checks numbers for repeated digits */

#include <stdio.h>
#define N 10

int main(void)
{
    int digit;
    long n;
    int digits[N] = {0};

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        digits[digit]++;
        n = n / 10;
        
    }

    printf("Digit:      ");
    for (int i = 0; i < N; i++)
    {
        printf("%3d", i);
    }
    printf("\nOccurrences:");
    for (int i = 0; i < N; i++)
    {
        printf("%3d", digits[i]);
    }
    printf("\n");

    

        
    return 0;
}