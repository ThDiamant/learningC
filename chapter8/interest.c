/* Prints a table of compount interest */

#include <stdio.h>


#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{
    int i, low_rate, num_years, year;
    double value[5];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number fo years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++)
    {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (year = 1; year < num_years; year++)
    {
        printf("%3d    ", year);
        for (i = 0; i < NUM_RATES; i++)
        {
            value[i] += (low_rate + i) / 100.00 * value[i];
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }
    
    return 0;
}

// My solution
// #define INITIAL_AMOUNT 100.0
// #define NUM_INTEREST 5

// int main(void)
// {
//     int interest, num_years;
//     float value[NUM_INTEREST];
//     int interests[NUM_INTEREST];

//     printf("Enter interest rate: ");
//     scanf("%d", &interest);
//     printf("Enter number of years: ");
//     scanf("%d", &num_years);

//     // Initialization of interests array
//     printf("Years      ");
//     for (int i = 0; i < NUM_INTEREST; i++)
//     {
//         value[i] = INITIAL_AMOUNT;
//         interests[i] = interest + i;
//         printf("%d%%       ", interests[i]);
//     }
//     printf("\n");

//     // Calculate and print values per year
//     for (int year = 1; year < num_years + 1; year++)
//     {
//         printf("  %d      ", year);
//         for (int j = 0; j < NUM_INTEREST; j++) {
//             value[j] = value[j] + value[j]*(interests[j] / 100.0);
//             printf("%.2f    ", value[j]);
//         }
//         printf("\n");
        
//     }

//     return 0;
// }
