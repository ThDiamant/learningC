#include <stdio.h>

int main(void)
{
    int n, oct1, oct2, oct3, oct4, oct5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);

    oct5 = n % 8;
    oct4 = (n / 8) % 8;
    oct3 = ((n / 8) / 8) % 8;
    oct2 = (((n / 8) / 8) / 8) % 8;
    oct1 = ((((n / 8) / 8) / 8) / 8) % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", oct1, oct2, oct3, oct4, oct5);


    return 0;
}