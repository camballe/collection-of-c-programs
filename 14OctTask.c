#include <stdio.h>
void main()
{
    char farmerName[100], farmerGender[7];
    int farmerID, farmerAge, pricePerKg;
    float farmSize, produceWeight, totalEarnings, farmerEarnings;
    pricePerKg = 100;

    printf("Hey there farmer, what's your name?\n");
    scanf("%s", farmerName);

    printf("Enter your ID number\n");
    scanf("%d", &farmerID);

    printf("How old are you?\n");
    scanf("%d", &farmerAge);

    printf("Are you MALE or FEMALE?\n");
    scanf("%s", farmerGender);

    printf("What is the size of farmable land (in hectares) that you have?\n");
    scanf("%f", &farmSize);

    printf("What is the amount of maize (in Kgs) that you have produced?\n");
    scanf("%f", &produceWeight);

    totalEarnings = produceWeight * pricePerKg;
    farmerEarnings = 0.95 * totalEarnings;

    printf("\n\n\n");

    printf("HERE ARE YOUR DETAILS:\n\n");
    printf("Your name is %s.\nYour ID no. is %d\nYou are %d years old.\nYou are %s.\nThe size of farmable land that you have is %f hectares.\nAt Kshs. 100 per kilogram, you will earn a total of Kshs. %f from your maize produce of %f kilograms, after the cooperative society takes its cut of 5 percent from the total sale price.", farmerName, farmerID, farmerAge, farmerGender, farmSize, farmerEarnings, produceWeight);
}
