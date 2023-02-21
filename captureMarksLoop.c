#include <stdio.h>
int main()
{
    int marks, unit = 0, i;
    char *courseCodes[8] = {"CSC111", "CSC112", "CSC113", "CSC115", "CSC126", "CCS001", "CCS009"};

    for (i = 1; i <= 7; i++)
    {
        printf("Enter marks for unit %s\n", courseCodes[unit]);
        scanf("%d", &marks);
        unit = unit + 1;
    }
}