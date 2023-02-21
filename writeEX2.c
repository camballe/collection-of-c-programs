#include <stdio.h>

void main()
{
    char fName[100], sName[100], residence[100], bankAccNo[20], nationality[20], phone[15], email[100];
    int IDno;
    float bankBal;

    printf("Enter your first name: ");
    scanf("%s", fName);
    printf("Enter your last name: ");
    scanf("%s", sName);
    printf("Enter your bank account number: ");
    scanf("%s", bankAccNo);
    printf("Enter your bank balance: ");
    scanf("%f", &bankBal);
    printf("Enter your nationality: ");
    scanf("%s", &nationality);
    printf("Enter your ID No: ");
    scanf("%d", &IDno);
    printf("Where do you reside? ");
    scanf("%s", residence);
    printf("Enter phone number: ");
    scanf("%s", &phone);
    printf("Enter email address: ");
    scanf("%s", &email);

    FILE *pointer;
    pointer = fopen("bank_details.txt", "w");
    fprintf(pointer, "Full Name: %s %s\nNationality: %s\nIDno: %d\nResidence: %s\nPhone Number: %s\nEmail Address: %s\nBank Account Number: %s\nBank Balance: %f", fName, sName, nationality, IDno, residence, phone, email, bankAccNo, bankBal);
    fclose(pointer);

    FILE *rpointer;
    rpointer = fopen("bank_details.txt", "r");
    char data[1000];

    while (!feof(rpointer))
    {
        fgets(data, 1000, rpointer);
        printf("%s\n", data);
    }
}