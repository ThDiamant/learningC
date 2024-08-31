#include <stdio.h>

int main(void)
{
    int i, j, n, factorial;
    float  e = 1.0f;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        // Calculate factorial
        factorial = 1;
        for (j = 2; j <= i; j++){
            factorial *= j;
        }

        e += 1.0f/factorial;
    }
    

    printf("Approximated value of e up to %d terms of its definition: %f\n", n, e);

    return 0;
}