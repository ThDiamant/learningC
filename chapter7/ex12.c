#include <stdio.h>

int main(void)
{
    char ch;
    float expr, tmp;


    printf("Enter an expression: ");
    scanf("%f", &expr); // read the first number of the expression
    // check the character right after the first number
    while ((ch = getchar()) != '\n')
    {
        // depending on the input operation read the next operation and calculate the expression
        if (ch == '+')
        {
            scanf("%f", &tmp);
            expr = expr + tmp;
        } else if (ch == '-') {
            scanf("%f", &tmp);
            expr = expr - tmp;
        } else if (ch == '*') {
            scanf("%f", &tmp);
            expr = expr * tmp;
        } else if (ch == '/') {
            scanf("%f", &tmp);
            expr = expr / tmp;
        }
            
    }
    printf("Value of the expression: %f\n", expr);
    
    return 0;
}