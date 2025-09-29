/* broker.c but modified to fit the practice criteria*/

#include <stdio.h>

int main(void)
{
    float commission, rival, share_price, value;
    int num_shares;

    printf("\nEnter the number of shares: ");
    scanf("%d", &num_shares);
    printf("\nEnter the price of each share: ");
    scanf("%f", &share_price);
    value = num_shares * share_price;

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

    if (commission < 39.00f)
        commission = 39.00f;
    
    if (num_shares < 2000)
        rival = 33.00f + 0.03 * num_shares;
    else
        rival = 33.00f + 0.02 * num_shares;

    printf("Commission: $%.2f\n", commission);
    printf("Rival's commission: $%.2f\n", rival);
    return 0;
}