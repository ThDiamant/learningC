#include <stdio.h>

int main(void)
{
    int n , num_digits = 0;

    printf("Enter a number (max 4 digits): ");
    scanf("%d",&n);

    if (n > 0 & n <= 9)
        num_digits = 1;
    else if (n >= 10 && n <= 99)
        num_digits = 2;
    else if (n >= 100 && n <= 999)
        num_digits = 3;
    else if (n >= 1000 && n <= 9999)
        num_digits = 4;

    
    if (num_digits)
        printf("The number %d has %d digits\n", n, num_digits);
    else
        printf("Invalid number\n");


    return 0;
}