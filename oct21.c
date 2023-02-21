#include <stdio.h>
void main()
{

	int num1, num2, res;
	double div;
	char choiceopt;

	printf("Enter the first number:\n");
	scanf("%d", &num1);

	printf("Enter the second number:\n");
	scanf("%d", &num2);

	printf("Select the operation to be done\nA: Addition\nS: Subtraction\nM: Multiplication\nD: Division\n");
	scanf(" %c", &choiceopt);

	switch (choiceopt)
	{
	case 'A':
		sum = num1 + num2;
		printf("%d + %d = %d\n", num1, num2, sum);
		break;

	case 'S':
		res = num1 - num2;
		printf("%d - %d = %d\n", num1, num2, res);
		break;

	case 'M':
		res = num1 * num2;
		printf("%d * %d = %d\n", num1, num2, res);
		break;

	case 'D':
		div = (float)num1 / num2;
		printf("%d / %d = %f\n", num1, num2, div);
		break;

	default:
		printf("Invalid choice, please select one of these: A, S, M, D\n");
		break;
	}
}
