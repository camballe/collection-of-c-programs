#include <stdio.h>
#include <stdbool.h>
int choice, numInput;

int displayMenu()
{
    printf("\n\n1. Get number\n2. Determine if number is even or odd\n3. Determine if number is positive or negative\n4. Determine how many digits are in a number\n5. Exit\n\nChoose one option.\n");
    scanf("%d", &choice);
    return choice;
}

int getInput()
{
    printf("Enter a number: ");
    scanf("%d", &numInput);
    return numInput;
}

int isEven(int number)
{
    if (number % 2 == 0)
    {
        printf("%d is even.\n", number);
    }
    else
    {
        printf("%d is odd.\n", number);
    }
    return 0;
}

int isPos(int number)
{
    if (number > 0)
    {
        printf("%d is positive.\n", number);
    }
    else if (number < 0)
    {
        printf("%d is negative.\n", number);
    }
    else
    {
        printf("%d is zero.\n", number);
    }
    return 0;
}

int numDigit(int number)
{
    int count = 0;

    for (int i = 0; i < number; i++)
    {
        if (number > 0)
        {
            number = number / 10;
            count++;
        }
        else if (number == 0)
        {
            break;
        }
    }
    printf("Number of digits in the entered figure: %d\n", count);
    return 0;
}

int main()
{
    bool run = true;
    while (run)
    {
        int menu = displayMenu();
        switch (menu)
        {
        case 1:
            int input1;
            printf("Enter a number: ");
            scanf("%d", &input1);
            break;
        case 2:
            int input2 = getInput();
            int even = isEven(input2);
            break;
        case 3:
            int input3 = getInput();
            int pos = isPos(input3);
            break;
        case 4:
            int input4 = getInput();
            int numDig = numDigit(input4);
            break;
        case 5:
            run = false;
            break;
        default:
            printf("Invalid option. Choose from 1 to 5");
            break;
        }
    }
}