#include <stdio.h>

int main(void)
{
    int i, n_days, dow_month_begins;

    printf("Enter number of days in month: ");
    scanf("%d",&n_days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d",&dow_month_begins);

    for (i = 0; i <= n_days + dow_month_begins - 1; i++)
    {
        if (i >= dow_month_begins)
            printf("%2d ", i - dow_month_begins + 1);
        else
            printf("   "); // two digits for the day number that would go there + 1 for the space after
        
        if (i % 7 == 0)
            printf("\n");
        
    }
    
    printf("\n");

    return 0;
}