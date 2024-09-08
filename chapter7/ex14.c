#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y = 1.0, y_old = 0;

    printf("Enter a positive number: ");
    scanf("%lf", &x);
    
    while(fabs(y_old - y) >= 0.00001 * y) {
        y_old = y;
        y = ((x / y) + y) / 2;
    }

    printf("Square root: %f\n", y);
    return 0;
}