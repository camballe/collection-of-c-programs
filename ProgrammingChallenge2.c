#include <stdio.h>

int salesForFiveDays[5];

void captureDetails()
{
    char fName[100], sName[100], productType[1000];
    int id, age;
    printf("Enter first name:\n");
    scanf("%s", fName);
    getchar();

    printf("Enter second name:\n");
    scanf("%s", sName);
    getchar();

    printf("Enter ID number:\n");
    scanf("%d", &id);
    getchar();

    printf("Enter age:\n");
    scanf("%d", &age);
    getchar();

    printf("What type of product is the salesperson selling?\n");
    scanf("%[^\n]s", productType);
    getchar();

    for (int i = 1; i <= 5; i++)
    {
        printf("Enter sales for day %d:\n", i);
        scanf("%d", &salesForFiveDays[i - 1]);
        getchar();
    }

    printf("\nDETAILS:\n\nFULL NAME: %s %s\nID NUMBER: %d\nAGE: %d\nTYPE OF PRODUCT SOLD: %s\n", fName, sName, id, age, productType);
    for (int i = 1; i <= 5; i++)
    {
        printf("Sales for day %d: Kshs. %d\n", i, salesForFiveDays[i - 1]);
    }
}

float commissionCalc()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("Enter sales for day %d:\n", i);
        scanf("%d", &salesForFiveDays[i - 1]);
        getchar();
    }

    int totalSales = 0;
    float commission;
    for (int i = 1; i <= 5; i++)
    {
        totalSales += salesForFiveDays[i - 1];
    }

    if ((totalSales <= 50000) && (totalSales >= 0))
    {
        commission = (float)totalSales * 0.05;
    }
    else if ((totalSales > 50000) && (totalSales < 100000))
    {
        commission = (float)totalSales * 0.1;
    }
    else if ((totalSales >= 100000) && (totalSales < 500000))
    {
        commission = (float)totalSales * 0.15;
    }
    else if (totalSales >= 500000)
    {
        commission = (float)totalSales * 0.2;
    }
    return commission;
}

float totalWeeklyEarningCalc()
{
    int retainer = 30000;
    float commission = commissionCalc();
    float totalEarning = retainer + commission;
    return totalEarning;
}

int main()
{
    int i = 1;
    while (i <= 10)
    {
        int choice;
        printf("HELLO!! PLEASE SELECT ONE OPTION\n1. Add details of salesperson %d\n2. Calculate the commission earned\n3. Calculate the total weekly earning\n4. Exit\n", i);
        scanf("%d", &choice);

        if (choice == 1)
        {
            captureDetails();
        }
        if (choice == 2)
        {
            float commissionEarned = commissionCalc();
            printf("Commission earned: Kshs. %lf\n", commissionEarned);
        }
        if (choice == 3)
        {
            float totalWeeklyEarning = totalWeeklyEarningCalc();
            printf("Total weekly earning: Kshs. %lf\n", totalWeeklyEarning);
        }
        if (choice == 4)
        {
            printf("You successfully exited the program!\n");
            return 1;
        }
        i++;

        return 0;
    }
}