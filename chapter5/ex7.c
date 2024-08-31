#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, max, min;

    printf("Enter for integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 > n2) {
        max = n1;
        min = n2;
    }
    else {
        max = n2;
        min = n1;
    }
        
    
    if (n3 > max)
        max = n3;
    else if (n3 < min)
        min = n3;
    
    if (n4 > max)
        max = n4;
    else if (n4 < min)
        min = n4;

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);


    return 0;
}