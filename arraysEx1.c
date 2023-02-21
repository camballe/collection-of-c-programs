#include <stdio.h>
int main()
{
    int marks[7], i;
    char grades[7];
    char *courseCodes[8] = {"CSC111", "CSC112", "CSC113", "CSC115", "CSC126", "CCS001", "CCS009"};

    for (i = 0; i < 7; i++)
    {
        printf("Enter marks for unit %s\n", courseCodes[i]);
        scanf("%d", &marks[i]);

        if ((marks[i] >= 70) && (marks[i] <= 100))
        {
            grades[i] = 'A';
        }
        else if ((marks[i] >= 60) && (marks[i] < 70))
        {
            grades[i] = 'B';
        }
        else if ((marks[i] >= 50) && (marks[i] < 60))
        {
            grades[i] = 'C';
        }
        else if ((marks[i] >= 40) && (marks[i] < 50))
        {
            grades[i] = 'D';
        }
        else if ((marks[i] < 40) && (marks[i] >= 0))
        {
            grades[i] = 'F';
        }
        else
        {
            grades[i] = '-';
        }
    }

    printf("UNIT            MARKS      GRADE\n");
    for (i = 0; i < 7; i++)
    {
        printf("%s          %d          %c\n", courseCodes[i], marks[i], grades[i]);
    }
}