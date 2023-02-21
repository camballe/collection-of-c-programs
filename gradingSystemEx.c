#include <stdio.h>
void main()
{

    char fullName[100], regNo[50];
    int csc111marks, csc112marks, csc113marks, csc114marks, csc115marks, csc126marks;
    char csc111grade, csc112grade, csc113grade, csc115grade, csc126grade;
    printf("Enter your full name:\n");
    scanf("%[^\n]s", fullName);
    getchar();

    printf("Enter your student registration number:\n");
    scanf("%[^\n]s", regNo);

    printf("Enter your marks for CSC111:\n");
    scanf("%d", &csc111marks);

    printf("Enter your marks for CSC112:\n");
    scanf("%d", &csc112marks);

    printf("Enter your marks for CSC113:\n");
    scanf("%d", &csc113marks);

    printf("Enter your marks for CSC115:\n");
    scanf("%d", &csc115marks);

    printf("Enter your marks for CSC126:\n");
    scanf("%d", &csc126marks);

    printf("\n\n\nHERE ARE YOUR DETAILS:\n\n");
    printf("STUDENT NAME: %s\n", fullName);
    printf("STUDENT IDNO: %s\n\n", regNo);

    // CSC111
    if ((csc111marks >= 70) && (csc111marks <= 100))

    {
        csc111grade = 'A';
    }
    else if ((csc111marks >= 60) && (csc111marks < 70))
    {
        csc111grade = 'B';
    }
    else if ((csc111marks >= 50) && (csc111marks < 60))
    {
        csc111grade = 'C';
    }
    else if ((csc111marks >= 40) && (csc111marks < 50))
    {
        csc111grade = 'D';
    }
    else if ((csc111marks < 40) && (csc111marks >= 0))
    {
        csc111grade = 'F';
    }
    else
    {
        csc111grade = '-';
    }

    // CSC112
    if ((csc112marks >= 70) && (csc112marks <= 100))
    {
        csc112grade = 'A';
    }
    else if ((csc112marks >= 60) && (csc112marks < 70))
    {
        csc112grade = 'B';
    }
    else if ((csc112marks >= 50) && (csc112marks < 60))
    {
        csc112grade = 'C';
    }
    else if ((csc112marks >= 40) && (csc112marks < 50))
    {
        csc112grade = 'D';
    }
    else if ((csc112marks < 40) && (csc112marks >= 0))
    {
        csc112grade = 'F';
    }
    else
    {
        csc112grade = '-';
    }

    // CSC113
    if ((csc113marks >= 70) && (csc113marks <= 100))
    {
        csc113grade = 'A';
    }
    else if ((csc113marks >= 60) && (csc113marks < 70))
    {
        csc113grade = 'B';
    }
    else if ((csc113marks >= 50) && (csc113marks < 60))
    {
        csc113grade = 'C';
    }
    else if ((csc113marks >= 40) && (csc113marks < 50))
    {
        csc113grade = 'D';
    }
    else if ((csc113marks < 40) && (csc113marks >= 0))
    {
        csc113grade = 'F';
    }
    else
    {
        csc113grade = '-';
    }

    // CSC115
    if ((csc115marks >= 70) && (csc115marks <= 100))
    {
        csc115grade = 'A';
    }
    else if ((csc115marks >= 60) && (csc115marks < 70))
    {
        csc115grade = 'B';
    }
    else if ((csc115marks >= 50) && (csc115marks < 60))
    {
        csc115grade = 'C';
    }
    else if ((csc115marks >= 40) && (csc115marks < 50))
    {
        csc115grade = 'D';
    }
    else if ((csc115marks < 40) && (csc115marks >= 0))
    {
        csc115grade = 'F';
    }
    else
    {
        csc115grade = '-';
    }

    // CSC126
    if ((csc126marks >= 70) && (csc126marks <= 100))
    {
        csc126grade = 'A';
    }
    else if ((csc126marks >= 60) && (csc126marks < 70))
    {
        csc126grade = 'B';
    }
    else if ((csc126marks >= 50) && (csc126marks < 60))
    {
        csc126grade = 'C';
    }
    else if ((csc126marks >= 40) && (csc126marks < 50))
    {
        csc126grade = 'D';
    }
    else if ((csc126marks < 40) && (csc126marks >= 0))
    {
        csc126grade = 'F';
    }
    else
    {
        csc126grade = '-';
    }

    printf("COURSE CODE         MARKS           GRADE\n");
    printf("CSC111              %d              %c\n", csc111marks, csc111grade);
    printf("CSC112              %d              %c\n", csc112marks, csc112grade);
    printf("CSC113              %d              %c\n", csc113marks, csc113grade);
    printf("CSC115              %d              %c\n", csc115marks, csc115grade);
    printf("CSC126              %d              %c\n", csc126marks, csc126grade);
}
