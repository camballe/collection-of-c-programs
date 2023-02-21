#include <stdio.h>
int main()
{
    int salesForTenDays[10], i = 1, dayNum = 0, sum = 0;

    // WHILE LOOP
    while (i <= 10)
    {

        printf("Enter sales for day %d\n", i);
        scanf("%d", &salesForTenDays[dayNum]);
        sum = sum + salesForTenDays[dayNum];
        i++;
        dayNum++;
    }

    // DO WHILE

    // do
    // {
    //     printf("Enter sales for day %d\n", i);
    //     scanf("%d", &salesForTenDays[dayNum]);
    //     sum = sum + salesForTenDays[dayNum];
    //     i++;
    //     dayNum++;
    // } while (i <= 10);

    printf("\nAVERAGE SALES: %f", (float)sum / 10);
}
