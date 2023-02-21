#include <stdio.h>
void main()
{
    int csc111marks, csc112marks, csc113marks, csc115marks, csc126marks, total;

    float average;

    char csc111grade, csc112grade, csc113grade, csc115grade, csc126grade;
    char name[6];

    printf("PLEASE ENTER YOUR MARKS AND GRADE FOR CSC111.\n");
    printf("Marks:");
    scanf("%d", &csc111marks);
    printf("Grade:");
    scanf(" %c", &csc111grade);

    printf("PLEASE ENTER YOUR MARKS AND GRADE FOR CSC112.\n");
    printf("Marks:");
    scanf("%d", &csc112marks);
    printf("Grade:");
    scanf(" %c", &csc112grade);

    printf("PLEASE ENTER YOUR MARKS AND GRADE FOR CSC113.\n");
    printf("Marks:");
    scanf("%d", &csc113marks);
    printf("Grade:");
    scanf(" %c", &csc113grade);

    printf("PLEASE ENTER YOUR MARKS AND GRADE FOR CSC115.\n");
    printf("Marks:");
    scanf("%d", &csc115marks);
    printf("Grade:");
    scanf(" %c", &csc115grade);

    printf("PLEASE ENTER YOUR MARKS AND GRADE FOR CSC126.\n");
    printf("Marks:");
    scanf("%d", &csc126marks);
    printf("Grade:");
    scanf(" %c", &csc126grade);

    total = csc111marks + csc112marks + csc113marks + csc115marks + csc126marks;
    average = (float)total / 5;

    printf("HERE ARE YOUR RESULTS:\n");
    printf("Course Code:        Marks:      Grade\n");
    printf("CSC 111:            %d          %c\n", csc111marks, csc111grade);
    printf("CSC 112:            %d          %c\n", csc112marks, csc112grade);
    printf("CSC 113:            %d          %c\n", csc113marks, csc113grade);
    printf("CSC 115:            %d          %c\n", csc115marks, csc115grade);
    printf("CSC 126:            %d          %c\n", csc126marks, csc126grade);
    printf("Total:      %d\n", total);
    printf("Average:    %f\n", average);
}