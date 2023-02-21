// P15/1921/2022
// GROUP 2

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    char name[50], indexNo[50];
    int age;
    int marks[5];
    char *grades[5];
};

struct student stud;

char *subjects[] = {"English           ", "Kiswahili         ", "Mathematics       ", "Integrated Science", "Creative Arts     "};

int main()
{

    FILE *fp;
    char filename[50];

    int choice;
    printf("\n\nHELLO!");
    printf("\n\nWhat would you like to do?");
    printf("\n1. Create result slip");
    printf("\n2. View result slip");
    printf("\nYour choice:\t");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\n\nEnter the following student details:");
        printf("\n1. Name:\t");
        scanf("%s", stud.name);
        printf("\n2. Index number:\t");
        scanf("%s", stud.indexNo);
        printf("\nAge:\t");
        scanf("%d", &stud.age);

        for (int i = 0; i < 5; i++)
        {
            printf("\nMarks in %s\t", subjects[i]);
            scanf("%d", &stud.marks[i]);

            if ((stud.marks[i] >= 80) && (stud.marks[i] <= 100))
            {
                stud.grades[i] = "Exceeds Expectations (E)";
            }
            else if ((stud.marks[i] >= 60) && (stud.marks[i] <= 79))
            {
                stud.grades[i] = "Meets Expectations (M)";
            }
            else if ((stud.marks[i] >= 50) && (stud.marks[i] <= 59))
            {
                stud.grades[i] = "Satisfactory (S)";
            }
            else if ((stud.marks[i] >= 0) && (stud.marks[i] < 50))
            {
                stud.grades[i] = "Below Expectation (B)";
            }
            else
            {
                printf("Please provide valid marks!\n");
                return 1;
            }
        }

        strcpy(filename, stud.name);
        fp = fopen(strcat(filename, ".txt"), "w");
        fprintf(fp, "STUDENT NAME:\t%s\nSTUDENT INDEX NUMBER:\t%s\nSTUDENT AGE:\t%d\n\nRESULTS\n%s\t\t%d\t%s\n%s\t\t%d\t%s\n%s\t\t%d\t%s\n%s\t\t%d\t%s\n%s\t\t%d\t%s", stud.name, stud.indexNo, stud.age, subjects[0], stud.marks[0], stud.grades[0], subjects[1], stud.marks[1], stud.grades[1], subjects[2], stud.marks[2], stud.grades[2], subjects[3], stud.marks[3], stud.grades[3], subjects[4], stud.marks[4], stud.grades[4]);
        fclose(fp);

        break;
    case 2:
        char nameInput[50];
        char details[9000];
        printf("Enter the name of the student whose details you would like to get:\t");
        scanf("%s", nameInput);
        printf("\n\n");
        fp = fopen(strcat(nameInput, ".txt"), "r");

        if (fp == NULL)
        {
            printf("No details of such a student were found!\n");
        }
        else
        {
            while (!feof(fp))
            {
                fgets(details, 1000, fp);
                printf("%s\n", details);
            }
        }
        break;

    default:
        printf("\nInvalid choice!\n");
        break;
    }
}