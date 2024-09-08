#include <stdio.h>

int main(void)
{
    char ch, fname;


    printf("Enter a first and a last name: ");
    // Do nothing until first non-space character is encountered
    while ((ch = getchar()) == ' ');
    // Store first non-space character since it corresponds to the first name initial
    fname = ch;
    
    // Skip the rest of the letters in the first name (skip intputs until a whitespace character)
    while ((ch = getchar()) != ' ');
    // Skip all whitespace characters
    while ((ch = getchar()) == ' ');
    // Print last name
    do
    {   
        putchar(ch);
        ch = getchar();
    } while (ch != ' ' & ch != '\n');
    
    // Print first name initial
    printf(", %c.\n", fname);
     

    return 0;
}