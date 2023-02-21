#include <stdio.h>
int main()
{
    int i, num, triNum;
    printf("Enter a number:\n");
    scanf("%d", &num);

    for (i = 0; i <= num; ++i)
    {
        triNum += i;
    }
    printf("Triangular number of %d is %d\n", num, triNum);
}