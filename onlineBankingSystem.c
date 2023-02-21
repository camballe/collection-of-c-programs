#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct user
{
    char phone[50];
    char ac[50];
    char password[50];
    float balance;
};

int main()
{
    struct user usr;
    FILE *fp;
    char filename[50], phone[50], password[50];
    int opt, choice;
    char cont = 'y';
    float amount;

    printf("\nWhat do you want to do?");
    printf("\n\n1. Register an account");
    printf("\n2. Login to an account");

    printf("\n\nYour choice:\t");
    scanf("%d", &opt);

    if (opt == 1)
    {
        system("clear");
        printf("Enter your account number:\t");
        scanf("%s", usr.ac);
        printf("\nEnter your phone number:\t");
        scanf("%s", usr.phone);
        printf("\nEnter your new password:\t");
        scanf("%s", usr.password);
        usr.balance = 0;
        strcpy(filename, usr.phone);
        fp = fopen(strcat(filename, ".dat"), "w");
        fwrite(&usr, sizeof(struct user), 1, fp);
        if (fwrite != 0)
        {
            printf("\n\nAccount successfully registered!\n");
        }
        else
        {
            printf("\n\nSomething went wrong! Please try again.\n");
        }
        fclose(fp);
    }
    if (opt == 2)
    {
        system("clear");
        printf("\nPhone number:\t");
        scanf("%s", phone);
        printf("Password:\t");
        scanf("%s", password);
        strcpy(filename, phone);
        fp = fopen(strcat(filename, ".dat"), "r");
        if (fp == NULL)
        {
            printf("\nAccount not registered!\n");
        }
        else
        {
            fread(&usr, sizeof(struct user), 1, fp);
            fclose(fp);
            if (!strcmp(password, usr.password))
            {
                while (cont == 'y')
                {
                    system("clear");
                    printf("\nPress 1 to check balance");
                    printf("\nPress 2 to deposit cash");
                    printf("\nPress 3 to withdraw cash");
                    printf("\nPress 4 for online transfer");
                    printf("\nPress 5 to change your password");
                    printf("\n\nYour choice:\t");
                    scanf("%d", &choice);

                    switch (choice)
                    {
                    case 1:
                        printf("\nYour current balance is Kes %.2f", usr.balance);
                        break;
                    case 2:
                        printf("\nEnter the amount");
                        scanf("%f", amount);
                        usr.balance += amount;
                        fp = fopen(filename, "r");
                        fwrite(&usr, sizeof(struct user), 1, fp);
                        if (fwrite != 0)
                            fclose(fp);

                    default:
                        break;
                    }

                    printf("\nDo you want to continue with the transaction [y/n]\t");
                    getchar();
                    scanf("%c", &cont);
                }
            }
            else
            {
                printf("\nInvalid password!\n");
            }
        }
    }
    return 0;
}