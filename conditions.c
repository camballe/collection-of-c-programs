#include <stdio.h>
void main()
{
	//5 == 5; equal
	//5 != 6; not equal
	//10 > 6; greater than
	//2 >= 2; greater or equal to
	//4 < 5; less than
	//4 <= 4; less or equal to
	

	int temperature;
	printf("What is the temperature?:");
	scanf("%d", &temperature);
	if(temperature <= 25)
	{
		printf("Switch off the AC\n");
        }
	else
	{
		printf("Switch on the AC\n");
	}
}
