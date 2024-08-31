#include <stdio.h>

int main(void)
{
    int m, n, tmp, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    if (n > m){
        tmp = m;
        m = n;
        n = tmp;
    }

    while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("Greatest common divisor: %d\n", m);
        

    return 0;
}