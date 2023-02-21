
#include <stdio.h>
int main()
{
    int num, flag = 0;
    printf("Enter a number to find out if it is a prime number or not: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not a prime number\n", num);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is a prime number\n", num);
    }
}
