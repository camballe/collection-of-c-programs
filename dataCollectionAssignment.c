// The following program collects data from an applicant to a university so that it is processed before their admission to the institution.

#include <stdio.h>
void main()
{

    char firstName[30];
    char secondName[30];
    char highSchool[30];
    int points, age;
    char allergy[100];
    float weight;

    printf("Welcome to Kambale University. Please answer the following questions:\n");

    printf("What is your first name?\n");
    scanf("%s", firstName);

    printf("What is your second name?\n");
    scanf("%s", secondName);

    printf("Which high school did you go to?\n");
    scanf("%s", highSchool);

    printf("How many points out of 84 did you score in your KCSE?\n");
    scanf("%d", &points);

    printf("The following questions are to help us understand your current medical condition:\n");

    printf("Do you have any allergies? If NO, say 'NO'. If 'YES', write the name(s) of what you're allergic to.\n");
    scanf("%s", allergy);

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("How much, in kilograms, do you weigh?\n");
    scanf("%f", &weight);

    printf("The following information will be submitted for processing before your admission:\n");

    printf("Your name is %s %s.\nYou went to %s High School.\nYou scored %d points in your KCSE.\nAllergies: %s\nYou are %d years old.\nYou weigh %f kilograms.\n", firstName, secondName, highSchool, points, allergy, age, weight);
}