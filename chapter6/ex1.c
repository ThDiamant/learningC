#include <stdio.h>

int main(void)
{
    float n, max = 0.00f;

    do
    {   
        printf("Enter a number: ");
        scanf("%f", &n);
        max = (n > max) ? n : max;
    } while (n > 0);
    
    printf("The largetst number entered was: %f\n", max);
    

    return 0;
}