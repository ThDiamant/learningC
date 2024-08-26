#include <stdio.h>
#define TWENTY 20
#define TEN 10
#define FIVE 5
#define SINGLE 1

int main(void)
{
    int amount, num_twenties, num_tens, num_fives, num_singles;
    
    printf("Enter a dollar amount (int): ");
    scanf("%d", &amount);

    num_twenties = amount / TWENTY;
    num_tens = (amount - num_twenties*TWENTY) / TEN;
    num_fives = (amount - num_twenties*TWENTY - num_tens*TEN) / FIVE;
    num_singles = (amount - num_twenties*TWENTY - num_tens*TEN - num_fives*FIVE) / SINGLE;

    printf("$20 bills: %d\n", num_twenties);
    printf("$10 bills: %d\n", num_tens);
    printf(" $5 bills: %d\n", num_fives);
    printf(" $1 bills: %d\n", num_singles);

    return 0;
}