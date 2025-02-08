/* Checks numbers for repeated digits */

#include <stdbool.h>
#include <stdio.h>
#define N 10

int main(void)
{
    int digit;
    long n;
    bool digit_seen[N] = {false};

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Repeated digit(s): ");
    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            printf("%d  ", digit);
        }
        digit_seen[digit] = true;
        n = n / 10;
        
    }
    printf("\n");
        
    return 0;
}