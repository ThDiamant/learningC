#include <stdio.h>

int main(void)
{
    char ch;
    int c = 0;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n')
    {   
        if (toupper(ch) == 'A' || toupper(ch) == 'E' || toupper(ch) == 'I' || toupper(ch) == 'O' || toupper(ch) == 'U')
            c++;
    }
    printf("Your sentence contains %d vowels.\n", c);
     

    return 0;
}