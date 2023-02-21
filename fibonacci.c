#include <stdio.h>
int fibonacci(int i)
{

    if (i == 0)
    {
        return 0;
    }

    if (i == 1)
    {
        return 1;
    }
    return fibonacci(i - 1) + fibonacci(i - 2);
}

int main()
{

    int i, num;
    printf("Enter a number:\n");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}