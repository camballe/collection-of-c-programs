#include <stdio.h>
void main()
{	
	float base, height, radius, length, width;
	double area;
	char shape;
	printf("Choose a shape whose area you would like to calculate:\nT: Triangle\nC:Circle\nR:Rectangle\n");
	scanf(" %c", &shape);

	switch(shape)
	{
		case 'T':
			printf("Enter the base length:\n");
			scanf("%f", &base);
			printf("Enter the height:\n");
			scanf("%f", &height);
			area = (float) 0.5 * base * height;
			printf("The area of this particular triangle is %f\n", area);
			break;

		case 'C':
                        printf("Enter the radius:\n");
                        scanf("%f", &radius);
                        area = (float) 3.142 * radius * radius;
                        printf("The area of this particular circle is %f\n", area);
			break;

		case 'R':
                        printf("Enter the length:\n");
                        scanf("%f", &length);
                        printf("Enter the width:\n");
                        scanf("%f", &width);
                        area = length * width;
                        printf("The area of this particular rectangle is %f\n", area);
			break;

		default:
			printf("Invalid choice. Please enter one of these: T, C, R\n");
			break;

	}
}
