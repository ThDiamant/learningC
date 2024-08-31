#include <stdio.h>

int main(void)
{
    int i = 1, j, factorial;
    float  e = 1.0f, epsilon;

    printf("Enter a small floating-point number (epsilon): ");
    scanf("%f", &epsilon);
    
    do
    {
        // Calculate factorial
        factorial = 1;
        for (j = 2; j <= i; j++){
            factorial *= j;
        }

        i ++;
        e += 1.0f/factorial;
    } while (1.0f/factorial >= epsilon);
    

    printf("Approximated value of e: %f\n", e);

    return 0;
}