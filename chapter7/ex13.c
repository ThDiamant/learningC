#include <stdio.h>

int main(void)
{
    char ch;
    int space_c = 0, sum = 0;

    printf("Enter an sentence: ");
    while ((ch = getchar()) != '\n')
    {
        if (ch == ' ')
            space_c ++;
        else
            sum ++;
        
        
    }

    printf("Average word length: %.1f\n", (float) sum / (space_c + 1));
    return 0;
}