#include <stdio.h>

int main(void)
{

    // int ------------------------------------------------------
    int i, n;

    printf("int size: %zu\n", sizeof(int));

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);
    }

    // short ------------------------------------------------------
    // short int i, n;

    // printf("int size: %zu\n", sizeof(short));

    // printf("This program prints a table of squares.\n");
    // printf("Enter number of entries in table: ");
    // scanf("%hd", &n);

    // for (i = 1; i <= n; i++)
    // {
    //     printf("%10hd%10hd\n", i, i * i);
    // }

    // long ------------------------------------------------------
    // long int i, n;

    // printf("int size: %zu\n", sizeof(long));

    // printf("This program prints a table of squares.\n");
    // printf("Enter number of entries in table: ");
    // scanf("%ld", &n);

    // for (i = 1; i <= n; i++)
    // {
    //     printf("%20ld%20ld\n", i, i * i);
    // }
    

    return 0;
}