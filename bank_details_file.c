#include <stdio.h>
void main()
{
    FILE *bankDetails;
    bankDetails = fopen("bank_details.txt", "w");
    char name[100], gender[100];
    int acc, balance, phone;

    printf("Enter your full name: ");
    fgets(name, 100, stdin);
    printf("Enter your gender: ");
    fgets(gender, 100, stdin);
    printf("Enter your account phone number: ");
    scanf("%d", &phone);
    printf("Enter your account number: ");
    scanf("%d", &acc);
    printf("Enter your account balance: ");
    scanf("%d", &balance);
    printf("Name: %s\nGender: %s\nPhone Number: %d\nACC: %d\nBalance: %d\n", name, gender, phone, acc, balance);

    fprintf(bankDetails, "Name: %s\nGender: %s\nPhone Number: %d\nACC: %d\nBalance: %d\n", name, gender, phone, acc, balance);
}