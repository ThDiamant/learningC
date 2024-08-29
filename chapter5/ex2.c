#include <stdio.h>
#define ZERO 0

int main(void)
{
    int h24, min24;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &h24, &min24);
     
    if (h24 > 12)
        if (h24 == 24)
            printf("Equivalent 12-hour time: %02d:%02d PM\n", ZERO, min24);
        else
            printf("Equivalent 12-hour time: %02d:%02d PM\n", h24 - 12, min24);
    else
       printf("Equivalent 12-hour time: %02d:%02d AM\n", h24, min24);

    return 0;
}