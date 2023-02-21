#include <stdio.h>
void main()
{
	int num1;
	printf("Enter a number:\n");
	scanf("%d", &num1);
	(num1 > 30) ? printf("The number is greater than 30\n") : printf("The number is less than 30\n");
}
