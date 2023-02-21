#include <stdio.h>
void main()
{
    int num1, num2, sum, difference, product;
    float div;

    num1 = 20;
    num2 = 7;
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    div = (float)num1 / num2;

    printf("Addition: %d + %d = %d\n", num1, num2, sum);
    printf("Subtraction: %d - %d = %d\n", num1, num2, difference);
    printf("Multiplication: %d * %d = %d\n", num1, num2, product);
    printf("Division: %d / %d = %f\n", num1, num2, div);
}