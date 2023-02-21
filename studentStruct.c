#include <stdio.h>

int main()
{
    struct studentStruct
    {
        char name[50], regNo[50];
        int age, marks[7];
    };

    struct studentStruct student;

    FILE *studentPointer;
    studentPointer = fopen("student.txt", "w");

    for (int num = 1; num <= 5; num++)
    {
        printf("Hello student %d, what's your name?\n", num);
        fgets(student.name, 50, stdin);

        printf("PLease enter your registration number\n");
        scanf("%s", &student.regNo);

        printf("How old are you?\n");
        scanf("%d", &student.age);

        int i;

        for (i = 1; i <= 7; i++)
        {
            printf("Please enter marks for subject %d:\t", i);
            scanf("%d", &student.marks[i - 1]);
            getchar();
        }

        fprintf(studentPointer, "\n\n\n\nSTUDENT %d\n\nStudent's name: %s\nStudent's registration number: %s\nStudent's age: %d\n", num, student.name, student.regNo, student.age);
        for (int k = 1; k <= 7; k++)
        {
            fprintf(studentPointer, "Subject %d:\t\t%d marks\n", k, student.marks[k - 1]);
        }
        printf("\n\n");
    }

    fclose(studentPointer);

    FILE *studentReadFile;
    studentReadFile = fopen("student.txt", "r");

    char studentInfo[10000];

    while (!feof(studentReadFile))
    {
        fgets(studentInfo, 10000, studentReadFile);
        printf("%s\n", studentInfo);
    }
}