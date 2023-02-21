#include <stdio.h>
void main()
{
    float ksh, usd;
    printf("Enter the amount of Kenyan Shillings that you would like to convert to US Dollars:\n");
    scanf("%f", &ksh);

    usd = (float)ksh / 121.15;

    printf("Ksh %f = %f US Dollars\n", ksh, usd);
}