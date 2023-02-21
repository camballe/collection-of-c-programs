// P15/1921/2022
// GROUP 2

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    int attempts, totalPoints;
};

struct rectangle
{
    int length, width;
};

struct circle
{
    int radius;
};

struct triangle
{
    int base, height;
};

struct rectangle rect;
struct circle circ;
struct triangle tri;

int generateRecValues()
{
    rect.length = rand() / 100000000;
    rect.width = rand() / 100000000;
}

int generateCircValues()
{
    circ.radius = rand() / 100000000;
}

int generateTriValues()
{
    tri.base = rand() / 100000000;
    tri.height = rand() / 100000000;
}

int main()
{

    int shapeChoice;
    struct student stud;
    stud.attempts = 0;
    stud.totalPoints = 0;

    float area, areaInput;

    printf("\n\nWELCOME!");
    printf("\n\nPractice calculating the area of various shapes!! Please pick a shape:");
    printf("\n\n1. Rectangle");
    printf("\n2. Circle");
    printf("\n3. Right-angled triangle");
    printf("\n\nYour choice:\t");
    scanf("%d", &shapeChoice);

    switch (shapeChoice)
    {
    case 1:
        char cont1 = 'y';

        while (cont1 == 'y')
        {
            generateRecValues();
            area = rect.length * rect.width;
            printf("\n\nCalculate the area of a rectangle using the following values:");
            printf("\nLength: %d", rect.length);
            printf("\nWidth: %d", rect.width);
            printf("\n\nYour answer:\t");
            scanf("%f", &areaInput);

            if (area == areaInput)
            {
                stud.totalPoints++;
                stud.attempts++;
                printf("\n\nCorrect!! You earned yourself a point! Try again? [y/n]\t");
                getchar();
                scanf("%c", &cont1);
                generateRecValues();
                if (cont1 == 'n')
                {
                    printf("\nATTEMPTS: %d\n", stud.attempts);
                    printf("\nTOTAL POINTS: %d\n", stud.totalPoints);
                }
            }
            else
            {
                stud.attempts++;
                printf("\n\nIncorrect! The answer is %f. Try again? [y/n]\t", area);
                getchar();
                scanf("%c", &cont1);
                generateRecValues();
                if (cont1 == 'n')
                {
                    printf("\nATTEMPTS: %d\n", stud.attempts);
                    printf("\nTOTAL POINTS: %d\n", stud.totalPoints);
                }
            }
        }

        break;
    case 2:
        char cont2 = 'y';

        while (cont2 == 'y')
        {
            generateCircValues();
            area = 3.142 * circ.radius * circ.radius;
            printf("\n\nCalculate the area of a circle using the following radius:");
            printf("\nRadius: %d", circ.radius);
            printf("\n\nYour answer:\t");
            scanf("%f", &areaInput);

            if (area == areaInput)
            {
                stud.totalPoints++;
                stud.attempts++;
                printf("\n\nCorrect!! You earned yourself a point! Try again? [y/n]\t");
                getchar();
                scanf("%c", &cont2);
                generateCircValues();
                if (cont2 == 'n')
                {
                    printf("\nATTEMPTS: %d\n", stud.attempts);
                    printf("\nTOTAL POINTS: %d\n", stud.totalPoints);
                }
            }
            else
            {
                stud.attempts++;
                printf("\n\nIncorrect! The answer is %f. Try again? [y/n]\t", area);
                getchar();
                scanf("%c", &cont2);
                generateRecValues();
                if (cont2 == 'n')
                {
                    printf("\nATTEMPTS: %d\n", stud.attempts);
                    printf("\nTOTAL POINTS: %d\n", stud.totalPoints);
                }
            }
        }

        break;
    case 3:
        char cont3 = 'y';

        while (cont3 == 'y')
        {
            generateTriValues();
            area = 0.5 * tri.base * tri.height;
            printf("\n\nCalculate the area of a right-angled triangle using the following values:");
            printf("\nBase length: %d", tri.base);
            printf("\nHeight: %d", tri.height);
            printf("\n\nYour answer:\t");
            scanf("%f", &areaInput);

            if (area == areaInput)
            {
                stud.totalPoints++;
                stud.attempts++;
                printf("\n\nCorrect!! You earned yourself a point! Try again? [y/n]\t");
                getchar();
                scanf("%c", &cont3);
                generateTriValues();
                if (cont3 == 'n')
                {
                    printf("\nATTEMPTS: %d\n", stud.attempts);
                    printf("\nTOTAL POINTS: %d\n", stud.totalPoints);
                }
            }
            else
            {
                stud.attempts++;
                printf("\n\nIncorrect! The answer is %f. Try again? [y/n]\t", area);
                getchar();
                scanf("%c", &cont3);
                generateRecValues();
                if (cont3 == 'n')
                {
                    printf("\nATTEMPTS: %d\n", stud.attempts);
                    printf("\nTOTAL POINTS: %d\n", stud.totalPoints);
                }
            }
        }

        break;

    default:
        printf("\nInvalid choice!!\n");
        break;
    }
}