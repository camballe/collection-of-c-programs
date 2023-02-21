//  Taking in input from the keyboard
#include <stdio.h>
void main()
{
    int age;
    float height, weight;
    char gender;
    char name[30];

    printf("Enter your gender\n");
    scanf("%c", &gender);

    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Enter your weight\n");
    scanf("%f", &weight);

    printf("Enter your height\n");
    scanf("%f", &height);

    printf("Enter your name\n");
    scanf("%s", name);

    printf("Gender is %c\nAge is %d\nWeight is %f\nHeight is %f\nName is %s\n", gender, age, weight, height, name);

    /* CALCULATIONS
        addition +
        subtraction -
        multiplication *
        division /
        modulus %
     */

    float total = weight + height;
    int ageAfter10Years = age + 10;
}
