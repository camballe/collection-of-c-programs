#include <stdio.h>
void main()
{
    int num1, num2;

    printf("Enter the first number\n");
    scanf("%d", &num1);

    printf("Enter the second number\n");
    scanf("%d", &num2);

    int sum = num1 + num2;
    int dif = num1 - num2;
    int prod = num1 * num2;
    float div = (float)num1 / num2;
    int mod = num1 % num2;

    printf("The sum of the two numbers is %d\nThe difference of the two numbers is %d\nThe product of the two numbers is %d\nThe first number divided by the second number is %f\nThe modulus of the two numbers is %d\n", sum, dif, prod, div, mod);
}