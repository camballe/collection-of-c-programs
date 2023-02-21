#include <stdio.h>
void main()
{

    // OPTION VARIABLE
    int opt;

    // FIXED DEPOSIT ACCOUNT: CUSTOMER DETAILS
    int idNo;
    char name[100];
    float openingBalance;

    // INTEREST
    float amountToBeSaved, interest, periodInYears;
    int months;
    do
    {
        printf("\n\n1. Create a fixed deposit account\n2. Calculate the amount of interest a customer will earn given a certain period.\nPlease select an action (1 or 2):");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            printf("CREATE A FIXED DEPOSIT ACCOUNT\n");
            printf("ENTER THE CUSTOMER DETAILS\n");
            printf("Name:");
            scanf(" %[^\n]s", name);
            printf("ID number:");
            scanf("%d", &idNo);
            printf("Initial deposit amount in Kenyan Shillings:");
            scanf("%f", &openingBalance);
            printf("\nThe fixed deposit account has been created successfully. Here are the customer's details:\nNAME: %s\nID NUMBER: %d\nINITIAL OPENING BALANCE: Kshs. %f\n", name, idNo, openingBalance);
            break;

        case 2:
            printf("CALCULATE THE AMOUNT OF INTEREST A CUSTOMER WILL EARN GIVEN A CERTAIN PERIOD\n");
            printf("Enter the amount to be saved:");
            scanf("%f", &amountToBeSaved);
            printf("Enter the period in months:");
            scanf("%d", &months);
            periodInYears = (float)months / 12;
            if (months < 6)
            {
                interest = (float)(amountToBeSaved * periodInYears * 5) / 100;
            }
            else if ((months >= 6) && (months < 12))
            {
                interest = (float)(amountToBeSaved * periodInYears * 6) / 100;
            }
            else if ((months >= 12) && (months <= 36))
            {
                interest = (float)(amountToBeSaved * periodInYears * 8) / 100;
            }
            else if ((months > 36) && (months <= 60))
            {
                interest = (float)(amountToBeSaved * periodInYears * 9) / 100;
            }
            else
            {
                interest = (float)(amountToBeSaved * periodInYears * 10) / 100;
            }

            printf("\nThe amount of interest to be earned is Kshs. %f\n", interest);
            break;
        default:
            printf("\nInvalid choice. Select 1 or 2\n");
            break;
        } /* code */
    } while (2 > 1);
}
