#include <stdio.h>

void main()
{
    FILE *studentInfo;
    char name[50], regNo[50];
    int age;
    printf("Enter your name: ");
    fgets(name, 50, stdin);
    printf("Enter your age: ");
    scanf("%d", &age);
    getchar();
    printf("Enter your registration number: ");
    fgets(regNo, 50, stdin);

    studentInfo = fopen("studentDetails.txt", "w");
    fprintf(studentInfo, "\n%s\n%d\n%s\n", name, age, regNo);
    fclose(studentInfo);

    FILE *readStudentInfo;
    readStudentInfo = fopen("studentDetails.txt", "r");
    char data[100];

    while (!feof(readStudentInfo))
    {
        fgets(data, 100, readStudentInfo);
        printf("%s\n", data);
    }
}