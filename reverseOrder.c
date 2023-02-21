#include <stdio.h>
void main()
{
    int i, input, num, fact = 1;
    printf("Enter a number:\n");
    scanf("%d", &input);
    num = input;
    i = num;

    while (i >= 1)
    {
        fact = fact * i;
        printf("\n\n%d\n", num);
        printf("Calculating product ... %d\n", fact);
        i = i - 1;
        num = num - 1;
    }
    printf("\nThe factorial of %d is %d\n", input, fact);
}