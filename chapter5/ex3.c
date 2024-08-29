#include <stdio.h>

int main(void)
{
    float commission, value, num_shares, shares_value, rival_commission;
    
    printf("Enter number of shares: ");
    scanf("%f", &num_shares);
    printf("Enter price per share: ");
    scanf("%f", &shares_value);
    value = num_shares * shares_value;

    rival_commission = 33.00f + .02 * num_shares;
    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (num_shares < 2000)
        rival_commission = 33.00 + 0.03 * num_shares;
    else
        rival_commission = 33.00 + 0.03 * num_shares;

    commission = commission < 39.00f ? 39.00 : commission;
    rival_commission = rival_commission < 39.00f ? 39.00 : rival_commission;

    printf("Commission: %.2f\n", commission);
    printf("Rival commission: %.2f\n", rival_commission);

    return 0;
}