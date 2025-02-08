/* Checks numbers for repeated digits */

#include <stdbool.h>
#include <stdio.h>
#define N 10

int main(void)
{
    int digit;
    long n = 1;
    bool digit_seen[N] = {false};

    while (n > 0) {
        printf("Enter a number: ");
        scanf("%d", &n);

        while (n > 0) {
            digit = n % 10;
            if (digit_seen[digit]) {
                break;
            }
            digit_seen[digit] = true;
            n = n / 10;
            
        }

        if (n > 0)
        {
            printf("Repeated digit\n");
        } else {
            printf("No repeated digit\n");
        }
    }

    
        
    return 0;
}