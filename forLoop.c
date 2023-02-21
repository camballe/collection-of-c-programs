#include <stdio.h>
void main()
{
    // int i;
    // for (i = 1; i < 101; i++)
    // {
    //     printf("%d\n", i);
    // }

    int i, marks;
    char name[100], grade;
    for (i = 0; i < 7; i++)
    {
        printf("Enter the name of the course unit:\n");
        fgets(name, 30, stdin);
        printf("Enter marks:\n");
        scanf("%d", &marks);

        if ((marks >= 70) && (marks <= 100))
        {
            grade = 'A';
        }
        else if ((marks >= 60) && (marks < 70))
        {
            grade = 'B';
        }
        else if ((marks >= 50) && (marks < 60))
        {
            grade = 'C';
        }
        else if ((marks >= 40) && (marks < 50))
        {
            grade = 'D';
        }
        else if ((marks < 40))
        {
            grade = 'F';
        }
        else
        {
            grade = '-';
        }

        printf("%s: %d(%c)\n", name, marks, grade);
    }
}