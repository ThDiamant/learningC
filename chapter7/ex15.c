#include <stdio.h>

int main(void)
{
    int factorial = 1, x;

    printf("Enter a positive integer: ");
    scanf("%d", &x);
    
    for (int i = 1; i <= x; i++)
    {
        factorial = factorial * i;
    }
    

    printf("Factorial of %d: %d\n", x, factorial);
    return 0;
}