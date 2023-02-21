#include <stdio.h>

char grader(int marks)
{
    int i;
    char grade;
    if ((marks >= 70) && (marks <= 100))
    {
        return grade = 'A';
    }
    else if ((marks >= 60) && (marks < 70))
    {
        return grade = 'B';
    }
    else if ((marks >= 50) && (marks < 60))
    {
        return grade = 'C';
    }
    else if ((marks >= 40) && (marks < 50))
    {
        return grade = 'D';
    }
    else if ((marks < 40) && (marks >= 0))
    {
        return grade = 'F';
    }
    else
    {
        printf("Oops!! Marks must be from 0 to 100.\n");
        return;
    }
}

int main()
{
    char *courses[] = {"Introduction to Computer Systems", "Introduction to Programming", "Discrete Mathematics", "Programming Lab", "Physics for Computing Systems", "Communication Skills", "HIV/AIDS"};
    int marksScored[7];
    int grades[7];

    for (int i = 0; i < 7; i++)
    {
        printf("Enter marks for %s:  ", courses[i]);
        scanf("%d", &marksScored[i]);
        grades[i] = grader(marksScored[i]);
    }

    FILE *pointer;
    pointer = fopen("gradedMarks.txt", "w");

    for (int i = 0; i < 7; i++)
    {
        fprintf(pointer, "%s - %c\n", courses[i], grader(marksScored[i]));
    }
}