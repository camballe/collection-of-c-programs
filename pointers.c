#include <stdio.h>
int main()
{
    FILE *wpointer;
    wpointer = fopen("testfile.txt", "w");
    // int a, b;
    // printf("Enter num 1\n");
    // scanf("%d", &a);
    // printf("Enter num 2\n");
    // scanf("%d", &b);
    // fprintf(wpointer, "%s %d %d", "The values are", a, b);

    printf("What is your name?\n");
    scanf("%[^\n]s");
}