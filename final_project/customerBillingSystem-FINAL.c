/* ============ This is a billing system created by: =================
                            1. PURITY MWANGANGI
                            2. DONOVAN SEAN
                            3. ENOCH KAMBALE
================================================================================ */

// It can be used to generate receipts, see previous receipts and to search for a specific customer's receipt. We have based our use case at Klabuu, a popular food joint in UoN.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// data to be used in the billing

struct food
{
    char item[100];
    float price;
    int quantity;
};

struct order
{
    char customer[50];
    char date[50];
    int numOfItems;
    struct food itm[50];
};

// functions to generate bills
void generateBillHeader(char name[50], char date[30])
{
    printf("\n\n");
    printf("\t    KLABUU FOODS");
    printf("\n\t   -----------------");
    printf("\nDate:%s", date);
    printf("\nInvoice To: %s", name);
    printf("\n");
    printf("---------------------------------------------------------------------------------\n");
    printf("Items\t\t\t\t\t\t");
    printf("Quantity\t\t");
    printf("Total\t\t");
    printf("\n-------------------------------------------------------------------------------");
    printf("\n\n");
}
void generateBillBody(char item[100], int quantity, float price)
{
    printf("%s\t\t\t", item);
    printf("%d\t\t\t", quantity);
    printf("%.2f\t\t\t", quantity * price);
    printf("\n");
}

void generateBillFooter(float total)
{
    printf("\n");
    printf("\n-------------------------------------------------------------------------------");
    printf("\nGrand Total\t\t\t%.2f", total);
    printf("\n-------------------------------------------------------------------------------\n");
}

int main()
{
    int opt, num, menuItem;
    struct order ord;
    struct order order;
    char name[50];
    char saveBill = 'y', continueFlag = 'y';
    FILE *fp;

    while (continueFlag == 'y')
    {
        float total;
        int receiptFound = 0;

        // dashboard
        printf("\t============KLABUU============");
        printf("\n\nPlease select your preferred operation");
        printf("\n\n1. Generate Receipt");
        printf("\n2. Show all Receipts");
        printf("\n3. Get A Specific Receipt");
        printf("\n4. Exit");

        printf("\n\nYour choice:\t");
        scanf("%d", &opt);
        getchar();

        switch (opt)
        {
        case 1:
            // intro
            system("clear");
            printf("\nPlease enter the name of the customer:\t");
            fgets(ord.customer, 50, stdin);
            strcpy(ord.date, __DATE__);
            printf("\nPlease enter the number of items to be bought:\t");
            scanf("%d", &num);
            ord.numOfItems = num;

            for (int i = 0; i < num; i++)
            {
                // menu
                getchar();
                printf("\n\n");
                printf("\n");
                printf("==========================MENU============================\n");
                printf("\n");
                printf("======SNACKS=======\t\t\t====DRINKS=======\n");
                printf(" 1. Smocha ==== 50/-\t\t\t2. Apple juice (Large) ==== 70/-\n 3. Kebab ==== 60/-\t\t\t4. Apple juice(Small) ==== 50/-\n 5. Chicken Wings ==== 100/-\t\t6. Pineapple Juice (Large) ==== 70/-\n 7. Chips ==== 120/-\t\t\t8. Pineapple Juice(Small) ==== 50/-\n 9. Bhajia ==== 130/-\t\t\t10. Mango Juice (Large) ==== 70/-\n 11. Rice x Beef Stew ==== 100/-\t12. Mango Juice (Small) ==== 50/-\n 13. Chapati x Beans ==== 110/-\t        14. Passion Juice(Large) ==== 70/-\n 15. Chapati x Beef Stew ==== 150/-\t16. Passion Juice (Small) ==== 50/-\n 17. Ugali x Beans ==== 90/-\t\t18. Orange Juice (Large) ==== 70/-\n 19. Ugali x Beef Stew ==== 140/- \t20. Orange Juice (Small) ==== 50/-\n 21. Ugali x Chicken ==== 160/-\t\t22. Cocktail Juice (Large) ==== 70/-\n 23. Ugali x Fish\t\t\t24. Cocktail Juice (Small) ==== 50/-\n 25. Biriyani Rice ==== 80/-\t\t26. Banana Smoothie(Large) ==== 70/-\n 27. Pilau ==== 120/-\t\t\t28. Banana Smoothie (Small) ==== 50/-\n 29. Chips x Chicken ==== 200/-\t\t30. Cocktail Smoothie (Large) ==== 70/-\n 31. Chips x Fish ==== 170/-\t\t32. Cocktail Smoothie (Small) ==== 50/-\n ");
                printf("Please select item %d from the menu:\t", i + 1);
                scanf("%d", &menuItem);

                // setting price and name of chosen item

                switch (menuItem)
                {
                case 1:
                    strcpy(ord.itm[i].item, "Smocha                   ");
                    ord.itm[i].price = 50;
                    break;

                case 2:
                    strcpy(ord.itm[i].item, "Apple Juice (Large)      ");
                    ord.itm[i].price = 70;
                    break;

                case 3:
                    strcpy(ord.itm[i].item, "Kebab                    ");
                    ord.itm[i].price = 60;
                    break;

                case 4:
                    strcpy(ord.itm[i].item, "Apple Juice (Small)      ");
                    ord.itm[i].price = 50;
                    break;

                case 5:
                    strcpy(ord.itm[i].item, "Chicken Wings            ");
                    ord.itm[i].price = 100;
                    break;

                case 6:
                    strcpy(ord.itm[i].item, "Pineapple Juice (Large)  ");
                    ord.itm[i].price = 70;
                    break;

                case 7:
                    strcpy(ord.itm[i].item, "Chips                    ");
                    ord.itm[i].price = 120;
                    break;

                case 8:
                    strcpy(ord.itm[i].item, "Pineapple Juice (Small)  ");
                    ord.itm[i].price = 50;
                    break;

                case 9:
                    strcpy(ord.itm[i].item, "Bhajia                   ");
                    ord.itm[i].price = 130;
                    break;

                case 10:
                    strcpy(ord.itm[i].item, "Mango Juice (Large)      ");
                    ord.itm[i].price = 70;
                    break;

                case 11:
                    strcpy(ord.itm[i].item, "Rice x Beef Stew         ");
                    ord.itm[i].price = 100;
                    break;

                case 12:
                    strcpy(ord.itm[i].item, "Mango Juice (Small)      ");
                    ord.itm[i].price = 50;
                    break;

                case 13:
                    strcpy(ord.itm[i].item, "Chapati x Beans          ");
                    ord.itm[i].price = 110;
                    break;

                case 14:
                    strcpy(ord.itm[i].item, "Passion Juice (Large)    ");
                    ord.itm[i].price = 70;
                    break;

                case 15:
                    strcpy(ord.itm[i].item, "Chapati x Beef Stew      ");
                    ord.itm[i].price = 150;
                    break;

                case 16:
                    strcpy(ord.itm[i].item, "Passion Juice (Small)    ");
                    ord.itm[i].price = 50;
                    break;

                case 17:
                    strcpy(ord.itm[i].item, "Ugali x Beans            ");
                    ord.itm[i].price = 90;
                    break;

                case 18:
                    strcpy(ord.itm[i].item, "Orange Juice (Large)     ");
                    ord.itm[i].price = 70;
                    break;

                case 19:
                    strcpy(ord.itm[i].item, "Ugali x Beef Stew        ");
                    ord.itm[i].price = 140;
                    break;

                case 20:
                    strcpy(ord.itm[i].item, "Orange Juice (Small)     ");
                    ord.itm[i].price = 50;
                    break;

                case 21:
                    strcpy(ord.itm[i].item, "Ugali x Chicken          ");
                    ord.itm[i].price = 160;
                    break;

                case 22:
                    strcpy(ord.itm[i].item, "Cocktail Juice (Large)   ");
                    ord.itm[i].price = 70;
                    break;

                case 23:
                    strcpy(ord.itm[i].item, "Ugali x Fish             ");
                    ord.itm[i].price = 150;
                    break;

                case 24:
                    strcpy(ord.itm[i].item, "Cocktail Juice (Small)   ");
                    ord.itm[i].price = 50;
                    break;

                case 25:
                    strcpy(ord.itm[i].item, "Biriyani Rice            ");
                    ord.itm[i].price = 80;
                    break;

                case 26:
                    strcpy(ord.itm[i].item, "Banana Smoothie (Large)  ");
                    ord.itm[i].price = 70;
                    break;

                case 27:
                    strcpy(ord.itm[i].item, "Pilau                    ");
                    ord.itm[i].price = 120;
                    break;

                case 28:
                    strcpy(ord.itm[i].item, "Banana Smoothie (Small)  ");
                    ord.itm[i].price = 50;
                    break;

                case 29:
                    strcpy(ord.itm[i].item, "Chips x Chicken          ");
                    ord.itm[i].price = 200;
                    break;

                case 30:
                    strcpy(ord.itm[i].item, "Cocktail Smoothie (Large)");
                    ord.itm[i].price = 70;
                    break;

                case 31:
                    strcpy(ord.itm[i].item, "Chips x Fish             ");
                    ord.itm[i].price = 170;
                    break;

                case 32:
                    strcpy(ord.itm[i].item, "Cocktail Smoothie (Small)");
                    ord.itm[i].price = 50;
                    break;

                default:
                    printf("\nInvalid Entry\n\n");
                    return 1;
                    break;
                }

                // quantity (number of servings)

                printf("Please enter the quantity:\t");
                scanf("%d", &ord.itm[i].quantity);

                // getting total
                total += ord.itm[i].price * ord.itm[i].quantity;
            }

            // generating the bill

            generateBillHeader(ord.customer, ord.date);
            for (int i = 0; i < ord.numOfItems; i++)
            {
                generateBillBody(ord.itm[i].item, ord.itm[i].quantity, ord.itm[i].price);
            }
            generateBillFooter(total);

            // save receipt for future reference?
            printf("\nDo you want to save the receipt? [y/n]:\t");
            scanf("%s", &saveBill);

            if ((saveBill == 'y') || (saveBill == 'Y'))
            {
                fp = fopen("Klabuu.txt", "a+");
                fwrite(&ord, sizeof(struct order), 1, fp);
                if (fwrite != 0)
                    printf("\nReceipt successfully saved!\n\n");
                else
                    printf("\nOops!! Couldn't save receipt!\n\n");
                fclose(fp);
            }
            break;

        case 2:
            // see all saved receipts
            system("clear");
            fp = fopen("Klabuu.txt", "r");
            printf("\n  *****Your Previous Receipts*****\n");
            while (fread(&order, sizeof(struct order), 1, fp))
            {
                float tot = 0;
                generateBillHeader(order.customer, order.date);
                for (int i = 0; i < order.numOfItems; i++)
                {
                    generateBillBody(order.itm[i].item, order.itm[i].quantity, order.itm[i].price);
                    tot += order.itm[i].quantity * order.itm[i].price;
                }
                generateBillFooter(tot);
            }
            fclose(fp);
            break;

        case 3:
            // get a specific customer's old receipts
            printf("Enter the name of the customer:\t");

            fgets(name, 50, stdin);
            system("clear");
            fp = fopen("Klabuu.txt", "r");

            while (fread(&order, sizeof(struct order), 1, fp))
            {
                float tot = 0;
                int compValue = strcmp(order.customer, name);
                if (compValue == 0)
                {
                    printf("\t*****%s*****", name);
                    generateBillHeader(order.customer, order.date);
                    for (int i = 0; i < order.numOfItems; i++)
                    {
                        generateBillBody(order.itm[i].item, order.itm[i].quantity, order.itm[i].price);
                        tot += order.itm[i].quantity * order.itm[i].price;
                    }
                    generateBillFooter(tot);
                    receiptFound = 1;
                }
            }
            if (!receiptFound)
            {
                printf("Sorry, invoices to %s not found!\n\n", name);
            }
            fclose(fp);
            break;
        case 4:
            // exit
            printf("\n\t\tHave a nice day!!\n\n");
            exit(0);
            return 1;
            break;
        default:
            printf("Invalid option! Please select 1, 2 or 3.\n\n");
            break;

            // making the program run again
            printf("\nDo you want to perform another operation?[y/n]:\t");
            scanf("%s", &continueFlag);
        }
    }

    printf("\n\n");

    return 0;
}
