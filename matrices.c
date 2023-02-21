#include <stdio.h>

int main()
{
    int arr1[3][3], arr2[3][3];

    printf("Enter values for first array:\n");
    int j, k;

    for (j = 0; j < 3; j++)
    {
        for (k = 0; k < 3; k++)
        {
            scanf("%d", &arr1[j][k]);
        }
    }

    printf("Enter values for second array:\n");
    int l, m;

    for (l = 0; l < 3; l++)
    {
        for (m = 0; m < 3; m++)
        {
            scanf("%d", &arr2[l][m]);
        }
    }

    int sumArr[3][3];

    int n, p;

    for (n = 0; n < 3; n++)
    {
        for (p = 0; p < 3; p++)
        {
            sumArr[n][p] = arr1[n][p] + arr2[n][p];
        }
    }

    printf("\n\n");

    int q, r;

    for (int q = 0; q < 3; q++)
    {
        for (int r = 0; r < 3; r++)
        {
            printf("%d ", sumArr[q][r]);
        }
        printf("\n");
    }
}